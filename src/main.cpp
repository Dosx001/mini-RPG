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
        Ma.move();
        getline(std::cin, input);
        if (input == "Full Menu" || input == "Full") {
            Mu.fullMenu();
        }
        if (input == "Inventory" || input == "Inve") {
            Invy.displayItems();
        }
        srand(time(0));
        if (rand() % 99 + 1 <= 30) {
            Battle Ba(Py, Mu);
        }
    }
    return 0;
}
