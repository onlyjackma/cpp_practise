#!/bin/sh
[ -e build ] || mkdir build 

cd build
cmake ../
make