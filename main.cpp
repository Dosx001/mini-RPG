#include "Player.h"
#include "Trials.h"
#include "Inventory.h"
#include "Menu.h"

int main() { 
    Player Py;
    Player *ptrPy = &Py;
    Py.create_name();
    std::cout << "Hello " << Py.get_name() << "!" << std::endl;
    //Trials Trial;
    //Py.set_luck(Trial.luck());
    //std::cout << "Your Luck stat is " << Py.get_luck() << std::endl;
    //Py.set_speed(Trial.speed());
    //std::cout << "Your Speed stat is " << Py.get_speed() << std::endl;
    //Py.set_intel(Trial.intel());
    //std::cout << "Your Intel stat is " << Py.get_intel() << std::endl;
    Inventory Invy;
    Inventory *ptrInvy = &Invy;
    Menu Mu(ptrPy, ptrInvy);
    Invy.add_item("Rusty sword");
    Invy.add_item("Rusty shield");
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

