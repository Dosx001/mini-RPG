#include "Menu.h"

void Menu::set_Py_Invy(Player *Py, Inventory *Invy) {
    ptrPy = Py;
    ptrInvy = Invy;
}

void Menu::quick_menu() {
    cout << "Full Menu | Inventory | Quit" << endl;
}

void Menu::full_menu() {
    string line(40, '_');
    cout << line << endl;
    cout << "Name: " << ptrPy -> get_name() << endl;
    cout << "Health: " << ptrPy -> get_health() << endl; 
    cout << "Stats: " << "Luck=" << ptrPy -> get_luck() << " Speed="
    << ptrPy -> get_speed() << " Intel=" << ptrPy -> get_intel() << endl;
    if (ptrInvy -> get_num_items() == 0) {
        cout << "Inventory: empty" << endl;
    } else {
        cout << "Inventory: " << endl;
        ptrInvy -> display_items();
    }
}
