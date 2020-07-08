#include "Player.h"
#include "Inventory.h"
#include "Menu.h"

int main() {
    Inventory Invy;
    Inventory* const ptrInvy = &Invy;
    Player Py(ptrInvy);
    Player* const ptrPy = &Py;
    Menu Mu(ptrPy, ptrInvy);
    std::cin.ignore();
    std::string line(50, '_');
    std::string input = "Start";
    while (input != "Quit") {
        Mu.quickMenu();
        getline(std::cin, input);
        std::cout << line << std::endl;
        if (input == "Full Menu" || input == "Full") {
            Mu.fullMenu();
        }
        if (input == "Inventory" || input == "Inve") {
            Invy.displayItems();
        }
        std::cout << std::endl;
    }
    return 0;
}

