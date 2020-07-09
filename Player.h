#pragma once
#include "Inventory.h"
#include "Classes.h"
#include "Trials.h"
#include "pch.h"

class Player{
    private:
        std::string name;
        Inventory* ptrInvy;
        Class* ptrCls;
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
        void setWisdom(unsigned short correct);
        void setStats();
    public:
        std::string getName() const;
        const char* getClassType() const;
        unsigned int getHealth() const;
        unsigned int getMana() const;
        unsigned short getLuck() const;
        unsigned short getSpeed() const;
        unsigned short getIntel() const;
        unsigned short getWisdom() const;
        unsigned short getStrength() const;
        unsigned short getCharisma() const;
};
