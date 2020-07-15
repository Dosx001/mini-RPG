#pragma once
#include "pch.hpp"

struct Ptrs {
    public:
        const short* ptrSpd;
        const short* ptrLuk;
        const short* ptrInt;
        const short* ptrWid;
        const short* ptrStr;
        const short* ptrChr;
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
