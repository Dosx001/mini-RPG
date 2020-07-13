#!/bin/bash
vim include/Player.hpp include/Inventory.hpp include/Trials.hpp include/Menu.hpp \
    include/Classes.hpp include/pch.hpp Makefile -p \
    "+vs src/Player.cpp | tabn" \
    "+vs src/Inventory.cpp | tabn" \
    "+vs src/Trials.cpp | tabn" \
    "+vs src/Menu.cpp | tabn" \
    "+vs src/Classes.cpp | tabn" \
    "+vs src/pch.cpp | tabn" \
    "+vs src/main.cpp | tabmove 0"
