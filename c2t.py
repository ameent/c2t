__author__ = 'Ameen Tayyebi'

from translator import *

# Ask for user input
#output_file_name = raw_input("Enter name of output file (e.g. ammo.d.ts): ")
#header_folder = raw_input("Enter top level folder location of header files: ")
#module_name = raw_input("Enter an optional name for top level module for generated classes: ")
#excluded_folders = Translator.grab_folder_exclusions()

output_file_name = "ammo.d.ts"
header_folder = "tests"
module_name = "Ammo"
excluded_folders = []

# Validate input before processing
if not header_folder or not module_name or not output_file_name:
    print "You must provide a value for all requested input."
else:
    # Create a translator class to perform the actual parsing
    translator = Translator(output_file_name, header_folder, module_name, excluded_folders)

    translator.parse()
    translator.preprocess()
    translator.dump()
