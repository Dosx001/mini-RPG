#include "Menu.h"
#include "Player.h"
#include "Inventory.h"

void Menu::quick_menu() {
    cout << "Full Menu | Inventory | Quit" << endl;
}

void Menu::full_menu() {
    Player Py;
    cout << "Stats=> " << "Luck: " << Py.get_luck() << " Speed: "
    << Py.get_speed() << " Intel: " << Py.get_intel() << endl;
}
