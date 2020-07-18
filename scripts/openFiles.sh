#!/bin/bash
vim -p include/Player.hpp include/Inventory.hpp include/Trials.hpp \
    include/Menu.hpp include/Classes.hpp include/Enemy.hpp include/Battle.hpp \
    include/pch.hpp src/main.cpp \
    "+vs src/Player.cpp | tabn" \
    "+vs src/Inventory.cpp | tabn" \
    "+vs src/Trials.cpp | tabn" \
    "+vs src/Menu.cpp | tabn" \
    "+vs src/Classes.cpp | tabn" \
    "+vs src/Enemy.cpp | tabn" \
    "+vs src/Battle.cpp | tabn" \
    "+vs src/pch.cpp | tabn" \
    "+tabmove 0"
