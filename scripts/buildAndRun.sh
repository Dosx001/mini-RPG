#!/bin/bash
exe=mini_RPG.exe
if [ $# == 0 ]
then
    make ${exe} && expect scripts/run.exp
elif [ $1 == 'w' ]
then
    make ${exe} && expect scripts/run.exp w
elif [ $1 == 's' ]
then
    make ${exe} && expect scripts/run.exp s
fi
