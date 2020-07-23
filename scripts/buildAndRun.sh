#!/bin/bash
make mini_RPG.exe
if [ $# == 0 ]
then
    expect scripts/run.exp
elif [ $1 == 'W' ]
then
    expect scripts/run.exp W
elif [ $1 == 'S' ]
then
    expect scripts/run.exp S
fi
