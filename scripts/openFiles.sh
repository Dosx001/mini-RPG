#!/bin/bash
if [ $# == 0 ]
then
    vim -p include/Player.hpp include/Inventory.hpp include/Trials.hpp \
        include/Menu.hpp include/Classes.hpp include/Enemy.hpp include/Battle.hpp \
        include/Maze.hpp include/pch.hpp src/main.cpp \
        "+vs src/Player.cpp | tabn" \
        "+vs src/Inventory.cpp | tabn" \
        "+vs src/Trials.cpp | tabn" \
        "+vs src/Menu.cpp | tabn" \
        "+vs src/Classes.cpp | tabn" \
        "+vs src/Enemy.cpp | tabn" \
        "+vs src/Battle.cpp | tabn" \
        "+vs src/Maze.cpp | tabn" \
        "+vs src/pch.cpp | tabn" \
        "+tabmove 0"
elif [ $1 == 's' ]
then
    vim -p scripts/run.exp scripts/coverage.sh scripts/openFiles.sh \
        "+vs scripts/buildAndRun.sh"
elif [ $1 == 'c' ]
then
    vim -O CMakeLists.txt spike/CMakeLists.txt
elif [ $1 == 't' ]
then
    vim -p src/Enemy.cpp src/Inventory.cpp \
        "+vs test/EnemyTest.cpp | tabn" \
        "+vs test/InventoryTest.cpp | tabmove 0"
fi
