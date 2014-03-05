''' Parts of this class's code has been borrowed from bindings_generator.py from Emscripten's project
'''
__author__ = 'Ameen Tayyebi'


class Generator:
    classes = {}
    parents = {}
    def_name_pairs = []

    output_file_path = ""

    module_name = ""

    def __init__(self, classes, parents, def_name_pairs, output_file_path, module_name):
        self.classes = classes
        self.parents = parents
        self.def_name_pairs = def_name_pairs
        self.output_file_path = output_file_path
        self.module_name = module_name

    def write(self):

        # Open output file
        output_file = open(self.output_file_path, 'w')

        self.write_module(output_file)

        # Close the output file
        output_file.close()

    def write_module(self, output_file):

        # Write module declaration
        if self.module_name != "":
            output_file.write("declare module " + self.module_name + "{\r\n")

        # Process all classes
        self.write_preprocessed_classes(output_file)

        if self.module_name != "":
            output_file.write("}\r\n")

    @staticmethod
    def check_has_constructor(clazz):
        for method in clazz['methods']:
            if method['constructor'] and not method['destructor']: return True

        return False

    def check_pure_virtual(self, clazz, progeny, classname, possible_prefix):
        #if not clazz.get('inherits'): return False # If no inheritance info, not a class, this is a CppHeaderParser struct
        print 'Checking pure virtual for', clazz['name'], clazz['inherits']
        # If we do not recognize any of the parent classes, assume this is pure virtual - ignore it
        parents = [parent['class'] for parent in clazz['inherits']]
        parents = [parent.split('<')[0] for parent in parents]  # remove template stuff
        parents = [parent if parent in self.classes else possible_prefix + parent for parent in parents]
        if any([not parent in self.classes for parent in parents]):
            print 'zz Warning: unknown parent class', parents, 'for', classname
            return True
        if any([self.check_pure_virtual(self.classes[parent], [clazz] + progeny, classname, possible_prefix) for parent in parents]): return True

        def dirtied(mname):
            #print 'zz checking dirtiness for', mname, 'in', progeny
            for progen in progeny:
                for method in progen['methods']:
                    if method['name'] == mname and not method['pure_virtual']:
                        #print 'zz dirty'
                        return True
            #print 'zz not dirtied'
            return False

        for method in clazz['methods']:
            if method['pure_virtual'] and not dirtied(method['name']):
                print 'zz ignoring pure virtual class', classname, 'due to', method['name']
                return True

    def write_preprocessed_classes(self, output_file):

        # Go over all definitions one by one and write out their declarations
        for classname, clazz in self.def_name_pairs:

            # Ignoring templated classes for now
            if clazz.get('template_typename'):
                continue

            possible_prefix = (classname.split('::')[0] + '::') if '::' in classname else ''

            clazz['abstract'] = self.check_pure_virtual(clazz, [], classname, possible_prefix) or clazz.get('effectively_abstract')

            has_constructor = Generator.check_has_constructor(clazz)

            if not has_constructor:
                if not clazz['abstract']:
                    print 'zz no constructor for', classname, 'and not abstract, so ignoring'
                    continue

            self.write_class(classname, classname, clazz, output_file)

    def write_class(self, generating_classname, classname, clazz, output_file):

        funcs = {} # name -> # of copies in the original, and originalname in a copy
        generating_classname_head = generating_classname.split('::')[-1]
        classname_head = classname.split('::')[-1]
        inherited = generating_classname_head != classname_head

        output_file.write('class %s {\r\n' % generating_classname_head)

        def clean_type(t):
            return t.replace('const ', '').replace('struct ', '').replace('&', '').replace('*', '').replace(' ', '')

        def generate_wrapping_code(classname):
            return '''%(classname)s.prototype.__cache__ = {};
        ''' % { 'classname': classname }

        for method in clazz['final_methods'].itervalues():
            mname = method['name']
            params = method['parameters']
            constructor = method['constructor']
            destructor = method['destructor']
            static = method['static']

            if destructor: continue
            if constructor and inherited: continue
            if constructor and clazz['abstract']: continue  # do not generate constructors for abstract base classes

            for args in params:
                for i in range(len(args)):
                    #print 'zz   arggggggg', classname, 'x', mname, 'x', args[i]['name'], 'x', args[i]['type'], 'x', dir(args[i]), 'y', args[i].get('default'), 'z', args[i].get('defaltValue'), args[i].keys()

                    if args[i]['name'].replace(' ', '') == '':
                        args[i]['name'] = 'arg' + str(i + 1)
                    elif args[i]['name'] == '&':
                        args[i]['name'] = 'arg' + str(i + 1)
                        args[i]['type'] += '&'

                    #print 'c1', parents.keys()
                    if args[i]['type'][-1] == '&':
                        sname = args[i]['type'][:-1]
                        if sname[-1] == ' ': sname = sname[:-1]
                        if sname in self.parents:
                            args[i]['type'] = self.parents[sname] + '::' + sname + '&'
                        elif sname.replace('const ', '') in self.parents:
                            sname = sname.replace('const ', '')
                            args[i]['type'] = 'const ' + self.parents[sname] + '::' + sname + '&'

                            #print 'POST arggggggg', classname, 'x', mname, 'x', args[i]['name'], 'x', args[i]['type']

                ret = ((classname + ' *') if constructor else method['returns_text'])  #.replace('virtual ', '')
                has_return = ret.replace(' ', '') != 'void'
                callprefix = 'new ' if constructor else ('self->' if not static else (classname + '::'))

                ''  # mname used in C
                actualmname = classname if constructor else (method.get('truename') or mname)
                if method.get('getter') or method.get('setter'):
                    actualmname = actualmname[4:]

                need_self = not constructor and not static

                def typedargs(args):
                    return ([] if not need_self else [classname + ' * self']) + map(
                        lambda i: args[i]['type'] + ' arg' + str(i), range(len(args)))

                def justargs(args):
                    return map(lambda i: 'arg' + str(i), range(len(args)))

                def justtypes(args):  # note: this ignores 'self'
                    return map(lambda i: args[i]['type'], range(len(args)))

                def dummyargs(args):
                    return ([] if not need_self else ['(%s*)argv[argc]' % classname]) + map(
                        lambda i: '(%s)argv[argc]' % args[i]['type'], range(len(args)))

                fullname = ('emscripten_bind_' + generating_classname + '__' + mname).replace('::', '__')
                generating_classname_suffixed = generating_classname
                mname_suffixed = mname
                count = funcs.setdefault(fullname, 0)
                funcs[fullname] += 1

                # handle overloading
                dupe = False
                if count > 0:
                    dupe = True
                    suffix = '_' + str(count + 1)
                    funcs[fullname + suffix] = 0
                    fullname += suffix
                    mname_suffixed += suffix
                    if constructor:
                        generating_classname_suffixed += suffix

                # C

                for args in params:
                    i = len(args)
                    # If we are returning a *copy* of an object, we return instead to a ref of a static held here. This seems the best compromise
                    staticize = not constructor and ret.replace(' ', '') != 'void' and method[
                        'returns'] in self.classes and (
                                    not method['returns_reference'] and not method['returns_pointer'])
                    # Make sure to mark our bindings wrappers in a way that they will not be inlined, eliminated as unneeded, or optimized into other signatures
                    output_file.write('''
            %s __attribute__((used, noinline)) %s_p%d(%s) {''' % (ret if not staticize else (ret + '&'), fullname, i,
                                                                  ', '.join(typedargs(args)[
                                                                            :i + (0 if not need_self else 1)])))
                    if not staticize:
                        output_file.write('\n')
                        if method.get('getter'):
                            output_file.write('''  return self->%s;''' % actualmname)
                        elif method.get('setter'):
                            output_file.write('''  self->%s = arg0;''' % actualmname)
                        elif method.get('destroyer'):
                            output_file.write('''  delete self;''')
                        elif method.get('operator'):
                            output_file.write(method['operator'])
                        else:  # normal method
                            output_file.write('''  %s%s%s(%s);''' % ('return ' if has_return else '',
                                                               callprefix, actualmname, ', '.join(justargs(args)[:i])))
                        output_file.write('\n')
                        output_file.write('}')
                    else:
                        output_file.write('\n')
                        if method.get('operator'):
                            output_file.write(method['operator'])
                        else:
                            output_file.write('''  static %s ret; ret = %s%s(%s); return ret;''' % (method['returns'],
                                callprefix, actualmname,
                                ', '.join(justargs(args)[:i])))
                        output_file.write('\n}')

                # JS

                #print 'zz types:', map(lambda arg: arg['type'], args)

                has_string_convs = False

                calls = ''

                #print 'js loopin', params, '|', len(args)#, args
                for args in params:
                    # We can assume that NULL is passed for null pointers, so object arguments can always
                    # have .ptr done on them
                    justargs_fixed = justargs(args)[:]
                    for i in range(len(args)):
                        arg = args[i]
                        clean = clean_type(arg['type'])
                        if clean in self.classes:
                            justargs_fixed[i] += '.ptr'
                        elif arg['type'].replace(' ', '').endswith('char*'):
                            justargs_fixed[i] = 'ensureString(' + justargs_fixed[i] + ')'
                            has_string_convs = True

                    i = len(args)
                    if args != params[0]:
                        calls += '  else '
                    if args != params[-1]:
                        calls += '  if (arg' + str(i) + ' === undefined)'
                    calls += '\n  ' + ('  ' if len(params) > 0 else '')
                    if constructor:
                        if not dupe:
                            calls += '''this.ptr = _%s_p%d(%s);
            ''' % (fullname, i, ', '.join(justargs_fixed[:i]))
                        else:
                            calls += '''this.ptr = _%s_p%d(%s);
            ''' % (fullname, i, ', '.join(justargs_fixed[:i]))
                    else:
                        return_value = '''_%s_p%d(%s)''' % (
                            fullname, i, ', '.join((['this.ptr'] if need_self else []) + justargs_fixed[:i]))
                        print 'zz making return', classname, method['name'], method['returns'], return_value
                        if method['returns'] in self.classes:
                            # Generate a wrapper
                            calls += '''return wrapPointer(%s, Module['%s']);''' % (
                            return_value, method['returns'].split('::')[-1])
                        else:
                            # Normal return
                            calls += ('return ' if ret != 'void' else '') + return_value + ';'
                        calls += '\n'

                if has_string_convs:
                    calls = 'var stack = Runtime.stackSave();\ntry {\n' + calls + '} finally { Runtime.stackRestore(stack) }\n';

                print 'Maekin:', classname, generating_classname, mname, mname_suffixed
                if constructor:
                    calls += '''
              %s.prototype.__cache__[this.ptr] = this;
              this.__class__ = %s;''' % (mname_suffixed, mname_suffixed)
                    if not dupe:
                        js_text = '''
            function %s(%s) {
            %s
            }
            %s''' % (mname_suffixed, ', '.join(justargs(args)), calls,
                     generate_wrapping_code(generating_classname_head))
                    else:
                        js_text = '''
            function %s(%s) {
            %s
            }
            %s.prototype = %s.prototype;
            ''' % (mname_suffixed, ', '.join(justargs(args)), calls, mname_suffixed, classname)

                        js_text += '''
            Module['%s'] = %s;
            ''' % (mname_suffixed, mname_suffixed)

                else:
                    js_text = '''
            %s.prototype%s = function(%s) {
            %s
            }
            ''' % (generating_classname_head, ("['" + mname_suffixed + "']"),
                   ', '.join(justargs(args)), calls)

                js_text = js_text.replace('\n\n', '\n').replace('\n\n', '\n')
                output_file.write(js_text)

                output_file.write('}\r\n')


