__author__ = 'Ameen Tayyebi'

import CppHeaderParser
import re


class Preprocessor:
    # Methods that need to be ignored will be renamed to this string
    ignore_tag = '____ignore____'

    def __init__(self):
        pass

    headers = []

    def add_header(self, cppheader):
        if not isinstance(cppheader, CppHeaderParser.CppHeader):
            raise "Must provide a CppHeader"

        self.headers.append(cppheader)

    def preprocess(self):
        if len(self.headers) == 0:
            raise "No headers have been added to the preprocessor"

        processed_classes = []

        for header in self.headers:
            processed_classes = processed_classes + self.preprocess_header(header)

        return processed_classes

    @staticmethod
    def preprocess_header(header):

        processed_classes = []

        for cls in header.classes.values():
            if Preprocessor.preprocess_class(cls):
                processed_classes.append(cls)

        return processed_classes

    @staticmethod
    def preprocess_class(cls, force_process=False):
        # If the class does not have a constructor, then we won't be able to construct one
        # in JS world either, so we ignore classes without constructors
        if not Preprocessor.has_constructor(cls) and not force_process:
            return False

        # Change :: to . to match Typescript syntax
        cls['name'] = cls['name'].replace('::', '.')

        # Go over all the methods that are public and change their parameter types to Typescript syntax
        for method in cls['methods']['public']:

            # Fix return type of method
            method['rtnType'] = Preprocessor.swap_builtin_types(Preprocessor.clean_type(Preprocessor.clean_template(method['rtnType'])))

            # Is this an operator? If so, the key 'operator' will be truthy and
            # hold the value of the operator, for example '='
            # This code assumes that the bindings use the same format as those of Emscripten
            if method['operator']:
                swaps = {
                    '=': 'op_set',
                    '+': 'op_add',
                    '-': 'op_sub',
                    '*': 'op_mul',
                    '/': 'op_div',
                    '[]': 'op_get',
                    '==': 'op_eq'
                }
                if swaps.get(method['operator']):
                    method['name'] = swaps[method['operator']]
                else:
                    # If we are dealing with an unsupported operator, then ignore it
                    method['name'] = Preprocessor.ignore_tag

            # For each of the parameters, fix the types and names
            arg_index = 0
            for arg in method['parameters']:

                # Sometimes CppHeaderParser parses the reference character & into the name of the argument
                arg['name'] = arg['name'].replace('&', '')

                # If the parameter has no name, then create a generic one for it
                if arg['name'] == '':
                    arg['name'] = 'arg' + str(arg_index)
                    arg_index += 1

                # Remove any templates if present
                if arg.get('template'):
                    arg['type'] = Preprocessor.clean_template(arg['type'])

                # Fix the type
                arg['type'] = Preprocessor.swap_builtin_types(Preprocessor.clean_type(arg['type']))

        # Fix type of public properties
        for prop in cls['properties']['public']:
            prop['type'] = Preprocessor.swap_builtin_types(Preprocessor.clean_type(prop['type']))

        # Inheritance chain
        for parent in cls['inherits']:
            parent['class'] = Preprocessor.clean_template(parent['class']).replace('::', '.')

        # Recurse on nested classes
        for nested_cls in cls['nested_classes']:
            # Force processing of nested types even if they don't have a public constructor (or otherwise
            # don't match the criteria that we need. It's very likely that the outer class produces the
            # nested class via some internal process and returns it to outside parties, as such, we preprocess
            # the type and include it in the output to reduce chances of things breaking down
            Preprocessor.preprocess_class(nested_cls, force_process=True)

        return True

    @staticmethod
    def clean_template(t):
        return re.sub(r'<.*>', '', t)

    @staticmethod
    def has_constructor(cls):
        for method in cls['methods']['public']:
            if method['constructor'] and not method['destructor']:
                return True

        return False

    @staticmethod
    def swap_builtin_types(t):
        return t.replace('int', 'number').replace('float', 'number').replace('double', 'number') \
            .replace('bool', 'boolean').replace('char', 'string')

    @staticmethod
    def clean_type(t):
        # Unsigned char * and void * are raw pointers and we don't have any equivalents in Typescript
        return t.replace('unsigned char *', 'any').replace('void *', 'any')\
            .replace('inline', '').replace('const ', '')\
            .replace('struct ', '').replace('static ', '')\
            .replace('class ', '').replace('unsigned ', '') \
            .replace('&', '').replace('*', '') \
            .replace(' ', '').replace('::', '.')

    @staticmethod
    def fix_template_value(t):  # Not sure why this is needed, might be a bug in CppHeaderParser
        if t == 'unsignedshortint':
            return 'unsigned short int'
        elif t == 'unsignedint':
            return 'unsigned int'
        return t

