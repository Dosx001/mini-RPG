#!/bin/bash
root=`pwd`
rm -rf coverage

if [ $# == 0 ]
then
    files=('Inventory' 'Enemy')
elif [ $1 == 'I' ]
then
    files=('Inventory')
elif [ $1 == 'E' ]
then
    files=('Enemy')
fi

for file in ${files[@]}
do
    rm -f CMakeFiles/lib.dir/src/${file}.gcda
    make ${file}Test.exe
    ./bin/${file}Test.exe
done

cd CMakeFiles/lib.dir/src

for file in ${files[@]}
do
    gcov ${file}.gcno
done

lcov --capture --directory . --output-file coverage.info
genhtml coverage.info --output-directory coverage
mv coverage ${root}
