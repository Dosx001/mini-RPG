#!/bin/bash
root=`pwd`
rm -rf coverage
rm CMakeFiles/lib.dir/src/$1.gcda
make $1Test.exe
./bin/$1Test.exe
cd CMakeFiles/lib.dir/src
gcov $1.gcno
lcov --capture --directory . --output-file $1.info
genhtml $1.info --output-directory coverage
mv coverage ${root}
