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
        int health = 100;
        int speed = 0;
        int luck = 0;
        int intel = 0;
        int wisdom = 0;
        int strength = 0;
        int charisma = 0;
    public:
        Player(Inventory *Invy);
    private:
        void createName();
        void setCls();
        void setLuck(int guesses);
        void setSpeed(int hits);
        void setIntel(int correct);
        void setStats();
    public:
        std::string getName();
        const char* getClassType();
        int getHealth();
        int getLuck();
        int getSpeed();
        int getIntel();
        int getWisdom();
        int getStrength();
        int getCharisma();
};
