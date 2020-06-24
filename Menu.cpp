#include "Menu.h"
#include "Player.h"
#include "Inventory.h"

void Menu::quick_menu() {
    cout << "Full Menu | Inventory | Quit" << endl;
}

void Menu::full_menu() {
    Player Py;
    Inventory Invy;
    cout << "Stats: " << "Luck=" << Py.get_luck() << " Speed="
    << Py.get_speed() << " Intel=" << Py.get_intel() << endl;
    if (Invy.get_num_items() == 0) {
        cout << "Inventory: empty" << endl;
    } else {
        cout << "Inventory: " << Invy.display_items() << endl;
    }
}
