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
        virtual int attack(int lvl);
        virtual void block(int& damage, int lvl);
};

class Warrior: public PlayerClass {
    public:
        using PlayerClass::PlayerClass;
        int attack(int lvl);
        void block(int& damage, int lvl);
};

class Hunter: public PlayerClass {
    public:
        using PlayerClass::PlayerClass;
        int attack(int lvl);
        void block(int& damage, int lvl);
};

class Sorcerer: public PlayerClass {
    public:
        using PlayerClass::PlayerClass;
        int attack(int lvl);
        void block(int& damage, int lvl);
};
