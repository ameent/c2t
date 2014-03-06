__author__ = 'Ameen Tayyebi'

import CppHeaderParser


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
    def preprocess_class(cls):
        # If the class does not have a constructor, then we won't be able to construct one
        # in JS world either, so we ignore classes without constructors
        if not Preprocessor.has_constructor(cls):
            return False

        # Change :: to . to match Typescript syntax
        cls['name'] = cls['name'].replace('::', '.')

        # Go over all the methods that are public and change their parameter types to Typescript syntax
        for method in cls['methods']['public']:

            # Fix return type of method
            method['rtnType'] = Preprocessor.swap_builtin_types(Preprocessor.clean_type(method['rtnType']))

            # Is this an operator? If so, the key 'operator' will be truthy and
            # hold the value of the operator, for example '='
            # This code assumes that the bindings use the same format as those of Emscripten
            if method['operator']:
                swaps = {
                    '=':'op_set',
                    '+':'op_add',
                    '-':'op_sub',
                    '*':'op_mul',
                    '/':'op_div',
                    '[]':'op_get',
                    '==':'op_eq'
                }
                if swaps.get(method['operator']):
                    method['name'] = swaps[method['operator']]
                else:
                    # If we are dealing with an unsupported operator, then ignore it
                    method['name'] = Preprocessor.ignore_tag

            # For each of the parameters, fix the types
            for arg in method['parameters']:
                arg['type'] = Preprocessor.swap_builtin_types(Preprocessor.clean_type(arg['type']))

        # Fix type of public properties
        for property in cls['properties']['public']:
            property['type'] = Preprocessor.swap_builtin_types(Preprocessor.clean_type(property['type']))

        # Inheritance chain
        for parent in cls['inherits']:
            parent['class'] = parent['class'].replace('::', '.')

        # Recurse on nested classes
        for nested_cls in cls['nested_classes']:
            Preprocessor.preprocess_class(nested_cls)

        return True


    @staticmethod
    def has_constructor(cls):
        for method in cls['methods']['public']:
            if method['constructor'] and not method['destructor']:
                return True

        return False

    @staticmethod
    def swap_builtin_types(t):
        return t.replace('int', 'number').replace('float', 'number').replace('double', 'number')\
            .replace('bool', 'boolean')

    @staticmethod
    def clean_type(t):
        return t.replace('inline', '').replace('const ', '').replace('struct ', '')\
            .replace('&', '').replace('*', '')\
            .replace(' ', '').replace('::', '.')

    @staticmethod
    def fix_template_value(t):  # Not sure why this is needed, might be a bug in CppHeaderParser
        if t == 'unsignedshortint':
            return 'unsigned short int'
        elif t == 'unsignedint':
            return 'unsigned int'
        return t

