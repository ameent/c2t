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
        processed_enums = []

        for header in self.headers:
            classes, enums = self.preprocess_header(header)
            processed_classes += classes
            processed_enums += enums

        return processed_classes, processed_enums

    @staticmethod
    def preprocess_header(header):

        processed_classes = []
        processed_enums = []

        for cls in header.classes.values():
            if Preprocessor.preprocess_class(cls, header):
                processed_classes.append(cls)

        for enum in header.global_enums.values():
            processed_enums.append(enum)

        return processed_classes, processed_enums

    @staticmethod
    def preprocess_class(cls, header):

        # It's possible that CppHeaderParser claims a union to be a class, if that's the case,
        # then ignore it
        if cls['name'] == 'union ' or cls['name'] == 'union':
            cls['name'] = Preprocessor.ignore_tag

        # Change :: to . to match Typescript syntax
        cls['name'] = cls['name'].replace('::', '.')

        # Go over all the methods that are public and change their parameter types to Typescript syntax
        for method in cls['methods']['public']:
            Preprocessor.process_method(method, header)

        # Process properties now
        for prop in cls['properties']['public']:
            # Ignore properties that have no name. This can happen if someone yawns with eyes open, or
            # if an anonymous union is defined inside a class, for example:
            # union { void* m_internalInfo1; int m_internalTmpValue;};
            if prop['name'] == '':
                prop['name'] = Preprocessor.ignore_tag

            # Fix type
            prop['type'] = Preprocessor.convert_type(prop['type'], header)

        # Inheritance chain
        for parent in cls['inherits']:
            parent['class'] = Preprocessor.clean_template(parent['class']).replace('::', '.')

        # Recurse on nested classes
        for nested_cls in cls['nested_classes']:
            Preprocessor.preprocess_class(nested_cls, header)

        return True

    @staticmethod
    def process_method(method, header):
        # If the method is already processed (it could occur when we are processing
        # class hierarchies since subclasses use the same object instance to define
        # a method that they have inherited from a parent; the same method class instance
        # is shared with all subclasses)
        if method.get('processed'):
            return

        # If method is pure virtual, then ignore it because there is no way to directly call it from JavaScript
        if method.get('pure_virtual') and method['pure_virtual']:
            method['name'] = Preprocessor.ignore_tag
            return

        # Fix return type of method
        if method.get('returns_unknown'):
            # This could happen if the class is templated and a templated type is returned
            method['rtnType'] = 'any'
        else:
            method['rtnType'] = Preprocessor.convert_type(method['rtnType'], header)

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

            # Remove any templates if present (e.g. SomeClass<SomeType>)
            if arg.get('template'):
                arg['type'] = Preprocessor.clean_template(arg['type'])

            # Fix the type
            arg['type'] = Preprocessor.convert_type(arg['type'], header)

        method['processed'] = True

    @staticmethod
    def convert_type(t, header):

        # Clean signage, const, etc.
        t = Preprocessor.clean_type(t)

        # Check to see if the type is a typedef and if so, convert it to its equivalent
        if header.typedefs.get(t):
            t = header.typedefs[t]

        # Again, clean signage, etc. since the typedef may have resolved to something
        # with the unneeded extras
        t = Preprocessor.clean_type(t)

        # Remove any templated parameters
        t = Preprocessor.clean_template(t)

        # Finally convert if it is a built-in type
        t = Preprocessor.swap_builtin_types(t)

        return t

    @staticmethod
    def clean_template(t):
        return re.sub(r'<.*>', '', t)

    @staticmethod
    def swap_builtin_types(t):
        swapper = {
            'int': 'number',
            'float': 'number',
            'double': 'number',
            'bool': 'boolean',
            'char': 'string'
        }

        if swapper.get(t):
            t = swapper[t]

        return t

    @staticmethod
    def clean_type(t):
        # Unsigned char * and void * are raw pointers and we don't have any equivalents in Typescript
        return t.replace('unsigned char *', 'any').replace('void *', 'any') \
            .replace('inline', '').replace('const ', '') \
            .replace('struct ', '').replace('static ', '') \
            .replace('class ', '').replace('unsigned ', '') \
            .replace('mutable ', '').replace('short ', '') \
            .replace('&', '').replace('*', '') \
            .replace(' ', '').replace('::', '.')
