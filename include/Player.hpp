#pragma once
#include "Inventory.hpp"
#include "Classes.hpp"
#include "Trials.hpp"
#include "pch.hpp"

class Player {
    private:
        std::string name;
        Inventory& Invy;
        PlayerClass* ptrCls;
        char classType[8];
        int health = 100;
        int mana = 100;
        int maxHealth = 100;
        int maxMana = 100;
        int level = 0;
        int experience = 0;
        short speed = 0;
        short luck = 0;
        short intel = 0;
        short wisdom = 0;
        short strength = 0;
        short charisma = 0;
    public:
        Player(Inventory& Invy);
    private:
        void createName();
        void setCls();
        void setLuck(Trials& Trial);
        void setSpeed(Trials& Trial);
        void setIntel(Trials& Trial);
        void setWisdom(Trials& Trial);
        void setStrength(Trials& Trial);
        void setStats();
    public:
        std::string getName() const;
        const char* getClassType() const;
        int getHealth() const;
        int getMaxHealth() const;
        int getMana() const;
        int getMaxMana() const;
        short getLuck() const;
        short getSpeed() const;
        short getIntel() const;
        short getWisdom() const;
        short getStrength() const;
        short getCharisma() const;
        PlayerClass* getPtrCls();
        bool takeDamage(int& damage);
        bool restoreHealth();
        bool restoreMana();
        void gainXP(int& XP);
};
