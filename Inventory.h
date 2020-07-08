#pragma once
#include "pch.h"

class Inventory{
    private:
        unsigned short size = 10;
        unsigned short numItems = 0;
        std::vector<std::string> items;
        unsigned short maxPotions = 10;
        unsigned short healthPotions = 2;
        unsigned short manaPotions = 2;
    public:
        unsigned short getSize() const;
        unsigned short getNumItems() const;
        void displayItems();
        unsigned short addItem(std::string item);
        unsigned short removeItem(std::string item);
        void addHP();
        void addMP();
        unsigned short getHP() const;
        unsigned short getMP() const;
        unsigned short getMaxPotions() const;
};
