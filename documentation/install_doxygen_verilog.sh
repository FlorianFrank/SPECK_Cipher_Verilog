#!/bin/bash


#git clone git@github.com:avelure/doxygen-verilog.git
ls -al
mkdir -p build_doxygen
pushd build_doxygen
cmake ../doxygen-verilog
make
sudo make install
popd
