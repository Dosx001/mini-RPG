#pragma once
#include "pch.h"

struct Ptrs {
    public:
        const unsigned short* ptrSpd;
        const unsigned short* ptrLuk;
        const unsigned short* ptrInt;
        const unsigned short* ptrWid;
        const unsigned short* ptrStr;
        const unsigned short* ptrChr;
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
