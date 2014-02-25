__author__ = 'Ameen Tayyebi'

import os
import CppHeaderParser

class HeaderTranscriber:

    # List of header parsers
    parsers = []

    # Name of output file to produce
    output_file_name = ""

    # Location of header files to be parsed
    header_folder = ""

    # List of directories to be excluded in the header folder
    excluded_folders = ""

    def __init__(self):
        # Ask for user input
        self.output_file_name = raw_input("Enter name of output file (e.g. ammo.d.ts):")
        self.header_folder = raw_input("Enter top level folder location of header files:")
        self.excluded_folders = self.grab_folder_exclusions()

        self.initialize_parsers()


    def grab_folder_exclusions(self):
        """ Grabs a list of folders to exclude from the parsed folder """

        folders_to_exclude = []
        exclude_prompt = "Enter name of folder to be excluded from headers: (empty string to ignore)"
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
            for file in files:
                if file.endswith("*.h") or file.endswith("*.hpp"):
                    self.parsers.append(CppHeaderParser.CppHeader(file))

            # Make sure excluded folders are not traversed



CppHeaderParser.CppHeader()

clang.cindex.Config.set_library_file('/usr/lib/llvm-3.2/lib/libclang.so.1')
index = clang.cindex.Index.create()