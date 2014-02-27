__author__ = 'Ameen Tayyebi'

class Generator:

    classes = []
    parents = []

    output_file = ""

    def __init__(self, classes, parents, output_file):
        self.classes = classes
        self.parents = parents
        self.output_file = output_file

