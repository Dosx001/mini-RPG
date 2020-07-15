#!/bin/bash
root=`pwd`
rm -rf coverage/$1Coverage
rm include/CMakeFiles/lib.dir/__/src/*.gcda
make
./bin/$1Test.exe
cd include/CMakeFiles/lib.dir/__/src
gcov $1.gcno
lcov --capture --directory . --output-file $1.info
genhtml $1.info --output-directory $1Coverage
mv $1Coverage ${root}/coverage
cd ${root}
./bin/$1Test.exe
