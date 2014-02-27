__author__ = 'Ameen Tayyebi'

''' This file borrows code heavily from bindings_generator.py from the Emscripten project
    hosted at https://github.com/kripken/emscripten
'''

import CppHeaderParser


class Preprocessor:

    cppheaders = []

    def add_header(self, cppheader):
        if not isinstance(cppheader, CppHeaderParser.CppHeader):
            raise "Must provide a CppHeader"

        self.cppheaders.append(cppheader)

    def preprocess(self):
        if len(self.cppheaders) == 0:
            raise "No headers have been added to the preprocessor"

        # Track list of classes and also their parents for nested relationships
        classes = {}
        parents = {}

        for cppheader in self.cppheaders:
            self.preprocess_header(cppheader, classes, parents)

        return classes, parents

    def preprocess_header(self, cppheader, classes, parents):
        for classname, clazz in cppheader.classes.items() + cppheader.structs.items():
            print 'zz see', classname, clazz, type(clazz)
            classes[classname] = clazz
            if type(clazz['methods']) == dict:
                clazz['saved_methods'] = clazz['methods']
                clazz['methods'] = clazz['methods'][
                    'public']  # CppHeaderParser doesn't have 'public' etc. in structs. so equalize to that

            if '::' in classname:
                assert classname.count('::') == 1
                parents[classname.split('::')[1]] = classname.split('::')[0]

            if hasattr(clazz, '_public_structs'):  # This is a class
                for sname, struct in clazz._public_structs.iteritems():
                    parents[sname] = classname
                    classes[classname + '::' + sname] = struct
                    struct['name'] = sname  # Missing in CppHeaderParser
                    print 'zz seen struct %s in %s' % (sname, classname)

            if 'fields' in clazz:  # This is a struct
                print 'zz add properties!'
                clazz['properties'] = {'public': clazz['fields']}
                clazz['name'] = classname
                clazz['inherits'] = []

        for classname, clazz in cppheader.classes.items() + cppheader.structs.items():
            # Various precalculations
            print 'zz precalc', classname
            for method in clazz['methods'][:]:
                method['constructor'] = method['constructor'] or (
                    method['name'] == classname)  # work around cppheaderparser issue
                print 'z constructorhmm?', method['name'], method[
                    'constructor']  #, constructor, method['name'], classname
                args = method['parameters']

                #if method['name'] == 'addWheel': print 'qqqq', classname, method

                # Fill in some missing stuff
                for i in range(len(args)):
                    if args[i]['pointer'] and '*' not in args[i]['type']:
                        args[i]['type'] += '*'
                    if args[i]['reference'] and '&' not in args[i]['type']:
                        args[i]['type'] += '&'

                    # remove float references
                    args[i]['type'] = Preprocessor.process_type(args[i]['type'])

                default_param = len(args) + 1
                for i in range(len(args)):
                    if args[i].get('default'):
                        default_param = i + 1
                        break

                method['parameters'] = [args[:i] for i in range(default_param - 1, len(args) + 1)]
                print 'zz ', classname, 'has parameters in range', range(default_param - 1, len(args) + 1)

                method['returns_text'] = method['returns']
                if method['static']:
                    method['returns_text'] = method['returns_text'].replace('static', '')

                # Implement operators
                if '__operator__' in method['name']:
                    if 'assignment' in method['name']:
                        method['name'] = 'op_set'
                        method['operator'] = '  return *self = arg0;'
                    elif 'add' in method['name']:
                        method['name'] = 'op_add'
                        method['operator'] = '  return *self += arg0;'
                    elif 'sub' in method['name']:
                        print 'zz subsubsub ', classname, method['name'], method['parameters'][0]
                        method['name'] = 'op_sub'
                        if len(method['parameters'][0]) == 0:
                            method['operator'] = '  static %s ret; ret = -*self; return ret;' % method['returns']
                        else:
                            method['operator'] = '  return *self -= arg0; // %d : %s' % (
                                len(method['parameters'][0]), method['parameters'][0][0]['name'])
                    elif 'imul' in method['name']:
                        method['name'] = 'op_mul'
                        method['operator'] = '  return *self *= arg0;'
                    elif 'mul' in method['name']:
                        method['name'] = 'op_mul'
                        method['operator'] = '  static %s ret; ret = *self * arg0; return ret;' % method['returns']
                    elif 'div' in method['name']:
                        method['name'] = 'op_div'
                        method['operator'] = '  return *self /= arg0;'
                    elif 'getitem' in method['name']:
                        method['name'] = 'op_get'
                        method['operator'] = '  return (*self)[arg0];'
                    elif 'delete' in method['name']:
                        method['ignore'] = True
                    elif 'new' in method['name']:
                        method['ignore'] = True
                    elif 'eq' in method['name']:
                        method['name'] = 'op_comp'
                        method['operator'] = '  return arg0 == arg1;' if len(
                            method['parameters'][0]) == 2 else '  return *self == arg0;'
                    else:
                        print 'zz unknown operator:', method['name'], ', ignoring'
                        method['ignore'] = True

                        # Fill in some missing stuff
                        method['returns_text'] = method['returns_text'].replace('&', '').replace('*', '')
                        if method['returns_text'] in parents:
                            method['returns_text'] = parents[method['returns_text']] + '::' + method['returns_text']
                        if method.get('returns_const'): method['returns_text'] = 'const ' + method['returns_text']
                        if method.get('returns_pointer'):
                            while method['returns_text'].count('*') < method['returns_pointer']:
                                method['returns_text'] += '*'
                        if method.get('returns_reference'): method['returns_text'] += '&'
                        method['returns_text'] = Preprocessor.process_type(method['returns_text'])

                        # Add getters/setters for public members
                        for prop in clazz['properties']['public']:
                            # if classname + '::' + prop['name'] in ignored: continue
                            if prop.get('array_dimensions'):
                                print 'zz warning: ignoring getter/setter for array', classname + '::' + prop['name']
                                continue
                            type_ = prop['type'].replace('mutable ', '')  #.replace(' ', '')
                            if '<' in prop['name'] or '<' in type_:
                                print 'zz warning: ignoring getter/setter for templated class', classname + '::' + prop[
                                    'name']
                                continue
                            reference = type_ in classes  # a raw struct or class as a prop means we need to work with a ref
                            clazz['methods'].append({
                                'getter': True,
                                'name': 'get_' + prop['name'],
                                'constructor': False,
                                'destructor': False,
                                'static': False,
                                'returns': type_.replace(' *', '').replace('*', ''),
                                'returns_text': type_ + ('&' if reference else ''),
                                'returns_reference': reference,
                                'returns_pointer': '*' in type_,
                                'pure_virtual': False,
                                'parameters': [[]],
                            })
                            clazz['methods'].append({
                                'setter': True,
                                'name': 'set_' + prop['name'],
                                'constructor': False,
                                'destructor': False,
                                'static': False,
                                'returns': 'void',
                                'returns_text': 'void',
                                'returns_reference': False,
                                'returns_pointer': False,
                                'pure_virtual': False,
                                'parameters': [[{
                                                    'type': type_ + ('&' if reference else ''),
                                                    'name': 'value',
                                                }]],
                            })

                    print 'zz is effectively abstract?', clazz['name'], classname, '0'
                    if 'saved_methods' in clazz and not Preprocessor.check_has_constructor(clazz):
                        print 'zz is effectively abstract?', clazz['name'], '1'
                        # Having a private constructor and no public constructor means you are, in effect, abstract
                        for private_method in clazz['saved_methods']['private']:
                            print 'zz is effectively abstract?', clazz['name'], '2'
                            if private_method['constructor']:
                                print 'zz is effectively abstract?', clazz['name'], '3'
                                clazz['effectively_abstract'] = True

                    # Add destroyer
                    if not clazz.get('abstract') and not clazz.get('effectively_abstract'):
                        clazz['methods'].append({
                            'destroyer': True,
                            'name': '__destroy__',
                            'constructor': False,
                            'destructor': False,
                            'static': False,
                            'returns': 'void',
                            'returns_text': 'void',
                            'returns_reference': False,
                            'returns_pointer': False,
                            'pure_virtual': False,
                            'parameters': [[]],
                        })

                    clazz['methods'] = filter(lambda method: not method.get('ignore'), clazz['methods'])

                    for classname, clazz in cppheader.classes.items() + cppheader.structs.items():
                        clazz['final_methods'] = {}

                        def explore(subclass, template_name=None, template_value=None):
                            # Do our functions first, and do not let later classes override
                            for method in subclass['methods']:
                                print classname, 'exploring', subclass['name'], '::', method['name']

                                if method['constructor']:
                                    if clazz != subclass:
                                        print "zz Subclasses cannot directly use their parent's constructors"
                                        continue
                                if method['destructor']:
                                    print 'zz Nothing to do there'
                                    continue

                                if method.get('operator') and subclass is not clazz:
                                    print 'zz Do not use parent class operators. Cast to that class if you need those operators (castObject)'
                                    continue

                                if method['name'] not in clazz['final_methods']:
                                    copied = clazz['final_methods'][method['name']] = {}
                                    for key in ['name', 'constructor', 'static', 'returns', 'returns_text',
                                                'returns_reference', 'returns_pointer', 'destructor', 'pure_virtual',
                                                'getter', 'setter', 'destroyer', 'operator']:
                                        copied[key] = method.get(key)
                                    copied['origin'] = subclass
                                    copied['parameters'] = [];
                                    for args in method['parameters']:
                                        # Copy the arguments, since templating may cause them to be altered
                                        copied['parameters'].append(Preprocessor.copy_args(args))
                                    if template_name:
                                        # Set template values
                                        copied['returns'] = copied['returns'].replace(template_name, template_value)
                                        copied['returns_text'] = copied['returns_text'].replace(template_name,
                                                                                                template_value)
                                        for args in copied['parameters']:
                                            for arg in args:
                                                arg['type'] = arg['type'].replace(template_name, template_value)
                                else:
                                    # Merge the new function in the best way we can. Two signatures (args) must differ in their number

                                    if method.get('operator'): continue  # do not merge operators

                                    curr = clazz['final_methods'][method['name']]

                                    if curr[
                                        'origin'] is not subclass: continue  # child class functions mask/hide parent functions of the same name in C++

                                    problem = False
                                    for curr_args in curr['parameters']:
                                        for method_args in method['parameters']:
                                            if len(curr_args) == len(method_args):
                                                problem = True
                                    if problem:
                                        print 'Warning: Cannot mix in overloaded functions', method[
                                            'name'], 'in class', classname, ', skipping'
                                        continue
                                    # TODO: Other compatibility checks, if any?

                                    curr['parameters'] += map(Preprocessor.copy_args, method['parameters'])

                                    print 'zz ', classname, 'has updated parameters of ', curr['parameters']

                            # Recurse
                            if subclass.get('inherits'):
                                for parent in subclass['inherits']:
                                    parent = parent['class']
                                    template_name = None
                                    template_value = None
                                    if '<' in parent:
                                        parent, template = parent.split('<')
                                        template_name = classes[parent]['template_typename']
                                        template_value = Preprocessor.fix_template_value(template.replace('>', ''))
                                        print 'template', template_value, 'for', classname, '::', parent, ' | ', template_name
                                    if parent not in classes and '::' in classname:  # They might both be subclasses in the same parent
                                        parent = classname.split('::')[0] + '::' + parent
                                    if parent not in classes:
                                        print 'Warning: parent class', parent, 'not a known class. Ignoring.'
                                        return
                                    explore(classes[parent], template_name, template_value)

                        explore(clazz)

                        for method in clazz['final_methods'].itervalues():
                            method['parameters'].sort(key=len)


    @staticmethod
    def process_type(type):
        ''' Filters types found in the input headers
        '''

        # Remove float references
        return type.replace('const float', 'float').replace('float &', 'float').replace('float&', 'float')

    @staticmethod
    def check_has_constructor(clazz):
        for method in clazz['methods']:
            if method['constructor'] and not method['destructor']: return True
        return False

    @staticmethod
    def clean_type(t):
        return t.replace('const ', '').replace('struct ', '').replace('&', '').replace('*', '').replace(' ', '')

    @staticmethod
    def fix_template_value(t):  # Not sure why this is needed, might be a bug in CppHeaderParser
        if t == 'unsignedshortint':
            return 'unsigned short int'
        elif t == 'unsignedint':
            return 'unsigned int'
        return t

    @staticmethod
    def copy_args(args):
        ret = []
        for arg in args:
            copiedarg = {
                'type': arg['type'],
                'name': arg['name'],
            }
            ret.append(copiedarg)
        return ret

