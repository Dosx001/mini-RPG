#include "Menu.h"

void Menu::set_Py_Invy(Player *Py, Inventory *Invy) {
    ptrPy = Py;
    ptrInvy = Invy;
}

void Menu::quick_menu() {
    std::cout << "Full Menu | Inventory | Quit" << std::endl;
}

void Menu::full_menu() {
    std::cout << "Name: " << ptrPy -> getName() << " | Class: " <<
    ptrPy -> getClassType() << std::endl;
    std::cout << "Health: " << ptrPy -> getHealth() << std::endl; 
    std::cout << "Stats: " << "Luck=" << ptrPy -> getLuck() << " Speed="
    << ptrPy -> getSpeed() << " Intel=" << ptrPy -> getIntel() << std::endl;
    if (ptrInvy -> get_num_items() == 0) {
        std::cout << "Inventory: empty" << std::endl;
    } else {
        std::cout << "Inventory: Capacity=" << ptrInvy -> get_size() << std::endl;
        ptrInvy -> display_items();
    }
}
