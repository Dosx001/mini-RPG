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
    std::cout << "Health: " << ptrPy -> getHealth() << 
    " | Mana: " << ptrPy -> getMana() << std::endl; 
    std::cout << "Stats: " << "Luck=" << ptrPy -> getLuck() << " Speed="
    << ptrPy -> getSpeed() << " Intel=" << ptrPy -> getIntel() << " Wisdom="
    << ptrPy -> getWisdom() << " Strength=" << ptrPy -> getStrength()
    << " Charisma=" << ptrPy -> getCharisma() << std::endl;
    if (ptrInvy -> getNumItems() == 0) {
        std::cout << "Inventory: empty" << std::endl;
    } else {
        std::cout << "Inventory: Capacity=" << ptrInvy -> getSize() << std::endl;
        ptrInvy -> displayItems();
    }
    std::cout << "Health Potions: " << ptrInvy -> getHP() << "/" << ptrInvy -> getMaxPotions() <<
    " Mana Potions: " << ptrInvy -> getMP() << "/" << ptrInvy -> getMaxPotions() << std::endl;
}
