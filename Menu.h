#pragma once
#include "Player.h"
#include "Inventory.h"

class Menu{
    private:
        Player* ptrPy;
        Inventory* ptrInvy;
    public:
        Menu(Player* Py, Inventory* Invy);
        void quickMenu();
        void fullMenu();
};
