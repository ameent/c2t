__author__ = 'Ameen Tayyebi'

import CppHeaderParser


class Preprocessor:

    cppheaders = []

    def add_header(self, cppheader):
        if not isinstance(cppheader, CppHeaderParser.CppHeader):
            raise "Must provide a CppHeader"

        self.cppheaders.append(cppheader)

    def preprocess(self, classes, parents, name_def_pairs):
        if len(self.cppheaders) == 0:
            raise "No headers have been added to the preprocessor"

        processed_classes = []

        for cppheader in self.cppheaders:
            processed_classes = processed_classes + self.preprocess_header(cppheader)

        return processed_classes

    @staticmethod
    def preprocess_header(cppheader):

        processed_classes = []

        for classname, clazz in cppheader.classes.items() + cppheader.structs.items():
            pass

        return processed_classes

    @staticmethod
    def has_constructor(cls):
        for method in cls['methods']:
            if method['constructor'] and not method['destructor']: return True
        return False

    @staticmethod
    def clean_type(t):
        return t.replace('const ', '').replace('struct ', '').replace('&', '').replace('*', '').replace(' ', '')

    @staticmethod
    def fix_template_value(t):  # Not sure why this is needed, might be a bug in CppHeaderParser
        if t == 'unsignedshortint':
            return 'unsigned short int'
        elif t == 'unsignedint':
            return 'unsigned int'
        return t

