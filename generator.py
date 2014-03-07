__author__ = 'Ameen Tayyebi'

from preprocessor import *

class Generator:

    # Whitespace character used to indent the output (switch to tab if desired)
    indent_white_space = '    '

    output_file_path = ""
    module_name = ""
    preprocessed_classes = []

    def __init__(self, preprocessed_classes, output_file_path, module_name):
        self.output_file_path = output_file_path
        self.module_name = module_name
        self.preprocessed_classes = preprocessed_classes

    def write(self):

        # Open output file
        output_file = open(self.output_file_path, 'w')

        self.write_module(output_file)

        # Close the output file
        output_file.close()

    def write_module(self, output_file):

        # Write module declaration
        if self.module_name != '':
            output_file.write('declare module %s {\r\n' % self.module_name)

        # Process all classes
        for cls in self.preprocessed_classes:
            self.write_class(cls, output_file, 1)

        if self.module_name != "":
            output_file.write("}\r\n")

    def write_class(self, cls, output_file, indent_level):

        if cls['name'] == Preprocessor.ignore_tag:
            return

        indent = indent_level * Generator.indent_white_space

        if len(cls['inherits']) > 0:
            # if there is multiple inheritance in the original C++, we choose the very first class since
            # TypeScript does not allow multiple inheritance
            output_file.write('%sexport class %s extends %s {\r\n' % (indent, cls['name'], cls['inherits'][0]['class']))
        else:
            output_file.write('%sexport class %s {\r\n' % (indent, cls['name']))

        # Generate methods
        for method in sorted(cls['methods']['public'], key=lambda m: m['name']):
            Generator.write_method(method, output_file, indent_level + 1)

        # Generate setters and getter for public properties
        for prop in cls['properties']['public']:
            Generator.write_property(prop, output_file, indent_level + 1)

        # Generate nested classes
        for nested_class in cls['nested_classes']:
            self.write_class(nested_class, output_file, indent_level + 1)

        output_file.write('%s}\r\n' % indent)

    ''' Write getter and setter for properties '''
    @staticmethod
    def write_property(prop, output_file, indent_level):

        # Ignore malformed properties
        if prop['name'] == Preprocessor.ignore_tag:
            return

        indent = indent_level * Generator.indent_white_space

        output_file.write('%sget_%s():%s;\r\n' % (indent, prop['name'], prop['type']))
        output_file.write('%sset_%s(value:%s):void;\r\n' % (indent, prop['name'], prop['type']))

    @staticmethod
    def write_method(method, output_file, indent_level):

        indent = indent_level * Generator.indent_white_space

        # If the preprocessor indicates that the method should be ignored, then do so
        if method['name'] == Preprocessor.ignore_tag:
            return

        # Ignore destructors
        if method['destructor']:
            return

        # Generate list of parameters
        param_list = ','.join('%s:%s' % (arg['name'], arg['type']) for arg in method['parameters'])

        # Print composed signature
        if method['constructor']:
            output_file.write('%sconstructor(%s);\r\n' % (indent, param_list))
        else:
            output_file.write('%s%s%s(%s):%s;\r\n' % (
                indent,
                ('static ' if method['static'] else ''),
                method['name'],
                param_list, method['rtnType']))
