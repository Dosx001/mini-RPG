#include "Player.hpp"
#include "Inventory.hpp"
#include "Menu.hpp"
#include "Enemy.hpp"
#include "Battle.hpp"

int main() {
    Inventory Invy;
    Player Py(Invy);
    Menu Mu(Py, Invy);
    std::cin.ignore();
    std::string line(50, '_');
    std::string input = "Start";
    while (input != "Quit") {
        Mu.quickMenu();
        getline(std::cin, input);
        std::cout << line << '\n';
        if (input == "Full Menu" || input == "Full") {
            Mu.fullMenu();
        }
        if (input == "Inventory" || input == "Inve") {
            Invy.displayItems();
        }
        std::cout << '\n';
        Enemy Ey;
        Battle Ba(Py, Ey);
    }
    return 0;
}
