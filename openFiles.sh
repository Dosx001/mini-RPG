#!/bin/bash
cd include/
vim Player.hpp Inventory.hpp Trials.hpp Menu.hpp Classes.hpp pch.hpp ../Makefile -p \
    "+vs ../src/Player.cpp | tabn" \
    "+vs ../src/Inventory.cpp | tabn" \
    "+vs ../src/Trials.cpp | tabn" \
    "+vs ../src/Menu.cpp | tabn" \
    "+vs ../src/Classes.cpp | tabn" \
    "+vs ../src/pch.cpp | tabn" \
    "+vs ../src/main.cpp | tabmove 0"
