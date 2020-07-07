#pragma once
#include "pch.h"

struct Ptrs {
    public:
        int *ptrSpd;
        int *ptrLuk;
        int *ptrInt;
        int *ptrWid;
        int *ptrStr;
        int *ptrChr;
};

class Class {
    public:
        Ptrs stats;
        virtual int attack();
        virtual int defense();
};

class Warrior: public Class {
    public:
        int attack();
        int defense();
};

class Hunter: public Class {
    public:
        int attack();
        int defense();
};

class Sorcerer: public Class {
    public:
        int attack();
        int defense();
};
