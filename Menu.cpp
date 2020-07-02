#include "Menu.h"

Menu::Menu(Player *Py, Inventory *Invy) {
    ptrPy = Py;
    ptrInvy = Invy;
}

void Menu::quickMenu() {
    std::cout << "Full Menu | Inventory | Quit" << std::endl;
}

void Menu::fullMenu() {
    std::cout << "Name: " << ptrPy -> getName() << " | Class: " <<
    ptrPy -> getClassType() << std::endl;
    std::cout << "Health: " << ptrPy -> getHealth() << std::endl; 
    std::cout << "Stats: " << "Luck=" << ptrPy -> getLuck() << " Speed="
    << ptrPy -> getSpeed() << " Intel=" << ptrPy -> getIntel() << " Wisdom="
    << ptrPy -> getWisdom() << " Strength=" << ptrPy -> getStrength()
    << " Charisma=" << ptrPy -> getCharisma() << std::endl;
    if (ptrInvy -> get_num_items() == 0) {
        std::cout << "Inventory: empty" << std::endl;
    } else {
        std::cout << "Inventory: Capacity=" << ptrInvy -> get_size() << std::endl;
        ptrInvy -> display_items();
    }
}
