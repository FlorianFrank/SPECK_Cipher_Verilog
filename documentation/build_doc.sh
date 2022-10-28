#!/bin/bash

mkdir -p build
pushd build
	cmake ..
	make
popd
python3 replace_linecomments_from_html.py
#cp -r ./styles/* ./build/doxygen_docs/html
#cp -r ../../documentation ./build/doxygen_docs/html
