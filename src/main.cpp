#include "Player.hpp"
#include "Inventory.hpp"
#include "Menu.hpp"
#include "Battle.hpp"
#include "Maze.hpp"

int main() {
    system("clear");
    Inventory Invy;
    Player Py(Invy);
    Menu Mu(Py, Invy);
    Maze Ma;
    std::cin.ignore();
    std::string input = "Start";
    while (input != "Quit" and Py.getHealth() != 0) {
        system("clear");
        Ma.display();
        Mu.quickMenu();
        if (input == "Full Menu" || input == "Full") {
            Mu.fullMenu();
        }
        if (input == "Inventory" || input == "Inve") {
            Invy.displayItems();
        }
        if (Ma.check(input)) {
            Ma.move();
            srand(time(0));
            if (rand() % 99 + 1 <= 30) {
                Battle Ba(Py, Mu);
            }
        }
        getline(std::cin, input);
    }
    return 0;
}
