#include "Menu.h"

void Menu::set_Py_Invy(Player *Py, Inventory *Invy) {
    ptrPy = Py;
    ptrInvy = Invy;
}

void Menu::quick_menu() {
    std::cout << "Full Menu | Inventory | Quit" << std::endl;
}

void Menu::full_menu() {
    std::cout << "Name: " << ptrPy -> get_name() << std::endl;
    std::cout << "Health: " << ptrPy -> get_health() << std::endl; 
    std::cout << "Stats: " << "Luck=" << ptrPy -> get_luck() << " Speed="
    << ptrPy -> get_speed() << " Intel=" << ptrPy -> get_intel() << std::endl;
    if (ptrInvy -> get_num_items() == 0) {
        std::cout << "Inventory: empty" << std::endl;
    } else {
        std::cout << "Inventory: Capacity=" << ptrInvy -> get_size() << std::endl;
        ptrInvy -> display_items();
    }
}
