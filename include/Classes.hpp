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
        short& level;
        char* type;
        PlayerClass(short& Spd, short& Luk, short& Int, short& Wid,
            short& Str, short& Chr, short& lvl);
        virtual int attack();
        virtual void block(int& damage);
        char* getType();
};

class Warrior: public PlayerClass {
    public:
        Warrior(short& Spd, short& Luk, short& Int, short& Wid,
            short& Str, short& Chr, short& lvl)
            :PlayerClass(Spd, Luk, Int, Wid, Str, Chr, lvl) {
                type = (char*)"Warrior";
            };
        int attack();
        void block(int& damage);
};

class Hunter: public PlayerClass {
    public:
        Hunter(short& Spd, short& Luk, short& Int, short& Wid,
            short& Str, short& Chr, short& lvl)
            :PlayerClass(Spd, Luk, Int, Wid, Str, Chr, lvl) {
                type = (char*)"Hunter";
            };
        int attack();
        void block(int& damage);
};

class Sorcerer: public PlayerClass {
    public:
        Sorcerer(short& Spd, short& Luk, short& Int, short& Wid,
            short& Str, short& Chr, short& lvl)
            :PlayerClass(Spd, Luk, Int, Wid, Str, Chr, lvl) {
                type = (char*)"Sorcerer";
            };
        int attack();
        void block(int& damage);
};
