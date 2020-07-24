#pragma once
#include "Player.hpp"
#include "Inventory.hpp"

class Menu {
    private:
        Player& Py;
        Inventory& Invy;
    public:
        Menu(Player& Py, Inventory& Invy);
        void quickMenu();
        void fullMenu();
};
