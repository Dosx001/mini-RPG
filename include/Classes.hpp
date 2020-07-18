#pragma once
#include "pch.hpp"

class PlayerClass {
    public:
        short& speed;
        short& luck;
        short& intel;
        short& wisdom;
        short& strength;
        short& charisma;
        PlayerClass(short& Spd, short& Luk, short& Int, short& Wid, short& Str, short& Chr);
        virtual int attack();
        virtual void block(int& damage);
};

class Warrior: public PlayerClass {
    public:
        using PlayerClass::PlayerClass;
        int attack();
        void block(int& damage);
};

class Hunter: public PlayerClass {
    public:
        using PlayerClass::PlayerClass;
        int attack();
        void block(int& damage);
};

class Sorcerer: public PlayerClass {
    public:
        using PlayerClass::PlayerClass;
        int attack();
        void block(int& damage);
};
