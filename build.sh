#!/bin/sh
[ -e build ] || mkdir build 

cd build
cmake ../ -DCMAKE_BUILD_TYPE=Debug
make