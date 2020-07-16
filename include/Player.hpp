#pragma once
#include "Inventory.hpp"
#include "Classes.hpp"
#include "Trials.hpp"
#include "pch.hpp"

class Player{
    private:
        std::string name;
        Inventory* ptrInvy;
        PlayerClass* ptrCls;
        char classType[8];
        int health = 100;
        int mana = 100;
        short speed = 0;
        short luck = 0;
        short intel = 0;
        short wisdom = 0;
        short strength = 0;
        short charisma = 0;
    public:
        Player(Inventory *Invy);
    private:
        void createName();
        void setCls();
        void setLuck(short guesses);
        void setSpeed(short hits);
        void setIntel(short correct);
        void setWisdom(short correct);
        void setStats();
    public:
        std::string getName() const;
        const char* getClassType() const;
        int getHealth() const;
        int getMana() const;
        short getLuck() const;
        short getSpeed() const;
        short getIntel() const;
        short getWisdom() const;
        short getStrength() const;
        short getCharisma() const;
};
