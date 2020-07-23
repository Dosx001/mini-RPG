#include "Menu.hpp"

Menu::Menu(Player& Py, Inventory& Invy) :ptrPy(Py), ptrInvy(Invy) {}

void Menu::quickMenu() {
    std::cout << ptrPy.getName() << " | HP: " << ptrPy.getHealth()
        << " | MP: " << ptrPy.getMana() << '\n';
    std::cout << "Full Menu | Inventory | Quit\n";
}

void Menu::fullMenu() {
    std::cout << "Name: " << ptrPy.getName() << " | Class: "
        << ptrPy.getClassType() << '\n';
    std::cout << "Health: " << ptrPy.getHealth()
        << " | Mana: " << ptrPy.getMana() << '\n';
    std::cout << "Stats: " << "Luck=" << ptrPy.getLuck() << " Speed="
        << ptrPy.getSpeed() << " Intel=" << ptrPy.getIntel() << " Wisdom="
        << ptrPy.getWisdom() << " Strength=" << ptrPy.getStrength()
        << " Charisma=" << ptrPy.getCharisma() << '\n';
    if (ptrInvy.getNumItems() == 0) {
        std::cout << "Inventory: empty\n";
    } else {
        std::cout << "Inventory: " << ptrInvy.getNumItems()
           << "/" <<  ptrInvy.getSize() << '\n';
        ptrInvy.displayItems();
    }
    std::cout << "Health Potions: " << ptrInvy.getHP() << "/"
        << ptrInvy.getMaxPotions() << " Mana Potions: "
        << ptrInvy.getMP() << "/" << ptrInvy.getMaxPotions() << '\n';
}
