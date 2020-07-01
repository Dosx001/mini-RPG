#include "Player.h"
#include "Inventory.h"
#include "Menu.h"

int main() {
    Inventory Invy;
    Inventory *ptrInvy = &Invy;
    Player Py(ptrInvy);
    Player *ptrPy = &Py;
    Menu Mu(ptrPy, ptrInvy);
    std::cin.ignore();
    std::string input = "Start";
    while (input != "Quit") {
        Mu.quick_menu();
        getline(std::cin, input);
        std::string line(50, '_');
        std::cout << line << std::endl;
        if (input == "Full Menu" || input == "Full") {
            Mu.full_menu();
        }
        if (input == "Inventory" || input == "Inve") {
            Invy.display_items();
        }
        std::cout << std::endl;
    }
    return 0;
}

