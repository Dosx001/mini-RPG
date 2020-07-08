#pragma once
#include "Inventory.h"
#include "Classes.h"
#include "Trials.h"
#include "pch.h"

class Player{
    private:
        std::string name;
        Inventory *ptrInvy;
        Class *ptrCls;
        char classType[8];
        unsigned int health = 100;
        unsigned int mana = 100;
        unsigned short speed = 0;
        unsigned short luck = 0;
        unsigned short intel = 0;
        unsigned short wisdom = 0;
        unsigned short strength = 0;
        unsigned short charisma = 0;
    public:
        Player(Inventory *Invy);
    private:
        void createName();
        void setCls();
        void setLuck(unsigned short guesses);
        void setSpeed(unsigned short hits);
        void setIntel(unsigned short correct);
        void setStats();
    public:
        std::string getName();
        const char* getClassType();
        unsigned int getHealth();
        unsigned int getMana();
        unsigned short getLuck();
        unsigned short getSpeed();
        unsigned short getIntel();
        unsigned short getWisdom();
        unsigned short getStrength();
        unsigned short getCharisma();
};
