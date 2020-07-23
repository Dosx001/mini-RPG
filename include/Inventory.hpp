#pragma once
#include "pch.hpp"

class Inventory {
    private:
        short size = 10;
        short numItems = 0;
        std::vector<std::string> items;
        short maxPotions = 10;
        short healthPotions = 2;
        short manaPotions = 2;
    public:
        short getSize() const;
        short getNumItems() const;
        void displayItems();
        bool addItem(std::string item);
        bool removeItem(std::string item);
        void addHP();
        void addMP();
        void removeHP();
        void removeMP();
        short getHP() const;
        short getMP() const;
        short getMaxPotions() const;
};
