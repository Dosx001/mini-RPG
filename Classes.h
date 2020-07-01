#include "pch.h"

class Class {
    public:
        virtual void test(); 
        virtual int attack();
        virtual int defense();
};

class Warrior: public Class {
    public:
        void test();
        int attack();
        int defense();
};

class Hunter: public Class {
    public:
        void test();
        int attack();
        int defense();
};

class Sorcerer: public Class {
    public:
        void test();
        int attack();
        int defense();
};
