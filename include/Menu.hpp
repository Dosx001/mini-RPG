#pragma once
#include "Player.hpp"
#include "Inventory.hpp"

class Menu{
    private:
        Player* ptrPy;
        Inventory* ptrInvy;
    public:
        Menu(Player* Py, Inventory* Invy);
        void quickMenu();
        void fullMenu();
};
