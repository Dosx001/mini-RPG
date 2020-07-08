#pragma once
#include "pch.h"

struct Ptrs {
    public:
        unsigned short *ptrSpd;
        unsigned short *ptrLuk;
        unsigned short *ptrInt;
        unsigned short *ptrWid;
        unsigned short *ptrStr;
        unsigned short *ptrChr;
};

class Class {
    public:
        Ptrs stats;
        virtual unsigned int attack();
        virtual unsigned int defense();
};

class Warrior: public Class {
    public:
        unsigned int attack();
        unsigned int defense();
};

class Hunter: public Class {
    public:
        unsigned int attack();
        unsigned int defense();
};

class Sorcerer: public Class {
    public:
        unsigned int attack();
        unsigned int defense();
};
