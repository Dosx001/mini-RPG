#include "Menu.hpp"

Menu::Menu(Player& Py, Inventory& Invy) :Py(Py), Invy(Invy) {}

void Menu::quickMenu() {
    std::cout << Py.getName() << " | Lvl: " << Py.getLevel() << " | HP: " << Py.getHealth()
        << '/' << Py.getMaxHealth() << " | MP: " << Py.getMana() << '/'
        << Py.getMaxMana() << '\n';
    std::cout << "Full Menu | Inventory | Quit\n";
}

void Menu::fullMenu() {
    std::cout << "Name: " << Py.getName() << " | Class: "
        << Py.getClassType() << '\n'
    << "Level: " << Py.getLevel() << " | XP: " << Py.getExperience() << '\n'
    << "Health: " << Py.getHealth() << '/' << Py.getMaxHealth()
        << " | Mana: " << Py.getMana() << '/' << Py.getMaxMana() << '\n'
    << "Stats: " << "Luck=" << Py.getLuck() << " Speed="
        << Py.getSpeed() << " Intel=" << Py.getIntel() << " Wisdom="
        << Py.getWisdom() << " Strength=" << Py.getStrength()
        << " Charisma=" << Py.getCharisma() << '\n'
    << "Health Potions: " << Invy.getHP() << "/"
        << Invy.getMaxPotions() << " Mana Potions: "
        << Invy.getMP() << "/" << Invy.getMaxPotions() << '\n';
    if (Invy.getNumItems() == 0) {
        std::cout << "Inventory: empty\n";
    } else {
        std::cout << "Inventory: " << Invy.getNumItems()
           << "/" <<  Invy.getSize() << '\n';
        Invy.displayItems();
    }
}
