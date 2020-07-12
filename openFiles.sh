#!/bin/bash
vim Player.h Inventory.h Trials.h Menu.h Classes.h pch.h Makefile -p \
    "+vs Player.cpp | tabn" \
    "+vs Inventory.cpp | tabn" \
    "+vs Trials.cpp | tabn" \
    "+vs Menu.cpp | tabn" \
    "+vs Classes.cpp | tabn" \
    "+vs pch.cpp | tabn" \
    "+vs main.cpp | tabmove 0"
