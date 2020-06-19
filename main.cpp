#include "Player.h"
#include "Trials.h"
#include "Inventory.h"
#include "Menu.h"
#include <iostream>

int main() { 
    Player Py;
    Py.create_name();
    cout << "Hello " << Py.get_name() << "!" << endl;
    Trials Trial;
    Py.set_luck(Trial.luck());
    cout << "Your Luck stat is " << Py.get_luck() << endl;
    Py.set_speed(Trial.speed());
    cout << "Your Speed stat is " << Py.get_speed() << endl;
    Py.set_intel(Trial.intel());
    cout << "Your Intel stat is " << Py.get_intel() << endl;
    Menu Mu;
    Inventory Invy;
    string input = "start";
    while (input != "Quit") {
        Mu.quick_menu();
        getline(cin, input);
        if (input == "Full Menu" or input == "Full") {
            Mu.full_menu();
        }
        if (input == "Inventory" or input == "Inve") {
            Invy.display_items();
        }
        sleep(1);
        cout << endl;
    }
    return 0;
}

