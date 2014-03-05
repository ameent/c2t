__author__ = 'Ameen Tayyebi'

class Generator:

    classes = []
    parents = []

    output_file_path = ""

    def __init__(self, classes, parents, output_file_path):
        self.classes = classes
        self.parents = parents
        self.output_file_path = output_file_path

    def write(self):

        # Open output file
        output_file = open(self.output_file_path, 'w')

        

        # Close the output file
        output_file.close()




