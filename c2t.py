__author__ = 'Ameen Tayyebi'

from translator import *

# Ask for user input
output_file_name = raw_input("Enter name of output file (e.g. ammo.d.ts): ")
header_folder = raw_input("Enter top level folder location of header files: ")
module_name = raw_input("Enter a name for top level module for generated classes: ")
excluded_folders = Translator.grab_folder_exclusions()

if module_name == '' or header_folder == '' or output_file_name == '':
    print 'You need to specify a module name, output file name and location of header files.'
else:
    # Create a translator class to perform the actual parsing
    translator = Translator(output_file_name, header_folder, module_name, excluded_folders)

    translator.parse()
    translator.preprocess()
    translator.dump()
