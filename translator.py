__author__ = 'Ameen Tayyebi'

import os

import CppHeaderParser
from preprocessor import *
from generator import *


class Translator:
    # List of header parsers
    parsers = []

    # Name of output file to produce
    output_file_name = ""

    # Location of header files to be parsed
    header_folder = ""

    # List of directories to be excluded in the header folder
    excluded_folders = []

    # Name of top-level module name
    module_name = ""

    # Preprocessor results
    processed_classes = []
    processed_enums = []

    def __init__(self, output_name, header_directory, output_module_name, folders_to_exclude):

        """
        Creates a new header translator instance.

        :param output_name: Name of the output file name where the result will be written.
        :param header_directory: Folder which will be scouted for .h and .hpp files to be used as input
        :param output_module_name: An optional name for a module will be prepended to all generated classes and interfaces
        :param folders_to_exclude: Subdirectories that should be excluded when the header_folder is being searched
                                 for .h and .hpp files
        """
        self.output_file_name = output_name
        self.header_folder = header_directory
        self.module_name = output_module_name
        self.excluded_folders = folders_to_exclude

    def parse(self):
        print "--> Parsing header files in ", self.header_folder
        self.initialize_parsers()
        print "--> Parsing finished"

    def preprocess(self):
        print "--> Preprocessing headers"

        preprocessor = Preprocessor()

        for parser in self.parsers:
            preprocessor.add_header(parser)

        self.processed_classes, self.processed_enums = preprocessor.preprocess()

        print "--> Preprocessing finished"

    def dump(self):
        print "--> Generating ", self.output_file_name

        generator = Generator(self.processed_classes, self.processed_enums, self.output_file_name, self.module_name)

        generator.write()

        print "--> Output successfully generated"

    @staticmethod
    def grab_folder_exclusions():
        """ Grabs a list of folders to exclude from the parsed folder """

        folders_to_exclude = []
        exclude_prompt = "Enter name of folder to be excluded from headers: (empty string to ignore) "
        exclude_folder = raw_input(exclude_prompt)

        # Keep asking the user for excluded folders until empty string is entered
        while exclude_folder != "":
            folders_to_exclude.append(exclude_folder)
            exclude_folder = raw_input(exclude_prompt)

        return folders_to_exclude

    def initialize_parsers(self):
        """ Parse out all header file in the given directory """
        for path, directories, files in os.walk(self.header_folder):

            # Parse header files
            f = ""
            try:
                for f in files:
                    if f.endswith(".h") or f.endswith(".hpp"):
                        self.parsers.append(CppHeaderParser.CppHeader(os.path.join(path, f)))
            except Exception as e:
                print "Error parsing file: ", os.path.join(path, f), e

            # Make sure excluded folders are not traversed
            for excluded_folder in self.excluded_folders:
                if excluded_folder in directories:
                    directories.remove(excluded_folder)