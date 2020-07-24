#include "Menu.hpp"

Menu::Menu(Player& Py, Inventory& Invy) :Py(Py), Invy(Invy) {}

void Menu::quickMenu() {
    std::cout << Py.getName() << " | HP: " << Py.getHealth() << '/' << Py.getMaxHealth()
        << " | MP: " << Py.getMana() << '/' << Py.getMaxMana() << '\n';
    std::cout << "Full Menu | Inventory | Quit\n";
}

void Menu::fullMenu() {
    std::cout << "Name: " << Py.getName() << " | Class: "
        << Py.getClassType() << '\n';
    std::cout << "Health: " << Py.getHealth() << '/' << Py.getMaxHealth()
        << " | Mana: " << Py.getMana() << '/' << Py.getMaxMana() << '\n';
    std::cout << "Stats: " << "Luck=" << Py.getLuck() << " Speed="
        << Py.getSpeed() << " Intel=" << Py.getIntel() << " Wisdom="
        << Py.getWisdom() << " Strength=" << Py.getStrength()
        << " Charisma=" << Py.getCharisma() << '\n';
    if (Invy.getNumItems() == 0) {
        std::cout << "Inventory: empty\n";
    } else {
        std::cout << "Inventory: " << Invy.getNumItems()
           << "/" <<  Invy.getSize() << '\n';
        Invy.displayItems();
    }
    std::cout << "Health Potions: " << Invy.getHP() << "/"
        << Invy.getMaxPotions() << " Mana Potions: "
        << Invy.getMP() << "/" << Invy.getMaxPotions() << '\n';
}
