#pragma once
#include "pch.h"

class Inventory{
    private:
        int size = 10;
        int numItems = 0;
        std::vector<std::string> items;
        int maxPotions = 10;
        int healthPotions = 2;
        int manaPotions = 2;
    public:
        Inventory();
        int getSize();
        int getNumItems();
        void displayItems();
        int addItem(std::string item);
        int removeItem(std::string item);
        void addHP();
        void addMP();
        int getHP();
        int getMP();
        int getMaxPotions();
};
