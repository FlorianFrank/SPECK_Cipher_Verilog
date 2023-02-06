#!/bin/python3

from os import listdir
from os.path import isfile, join
path = "./build/doxygen_docs/html"
from os import walk

#f = []
for (dirpath, dirnames, filenames) in walk(path):
    if (filenames != []):
        for file in filenames:
            if ("html" in file):
                file_path = str(dirpath) + "/" + str(file)
                print(file_path)
                with open(file_path, 'r') as file :
                    filedata = file.read()
                    filedata = filedata.replace('//%', '')

                with open(file_path, 'w') as file:
                    file.write(filedata)
