__author__ = 'Ameen Tayyebi'


class Generator:

    output_file_path = ""
    module_name = ""
    preprocessed_headers = []

    def __init__(self, preprocessed_headers, output_file_path, module_name):
        self.output_file_path = output_file_path
        self.module_name = module_name
        self.preprocessed_headers = preprocessed_headers

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

    def write_preprocessed_classes(self, output_file):
        pass
