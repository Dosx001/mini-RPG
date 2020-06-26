#include "Trials.h"
#include "Menu.h"

int main() { 
    Player Py;
    Player *ptrPy = &Py;
    Py.create_name();
    cout << "Hello " << Py.get_name() << "!" << endl;
    //Trials Trial;
    //Py.set_luck(Trial.luck());
    //cout << "Your Luck stat is " << Py.get_luck() << endl;
    //Py.set_speed(Trial.speed());
    //cout << "Your Speed stat is " << Py.get_speed() << endl;
    //Py.set_intel(Trial.intel());
    //cout << "Your Intel stat is " << Py.get_intel() << endl;
    Inventory Invy;
    Inventory *ptrInvy = &Invy;
    Menu Mu(ptrPy, ptrInvy);
    //string item = "stuff";
    Invy.add_item("Rusty sword");
    Invy.add_item("Rusty shield");
    string input = "Start";
    while (input != "Quit") {
        Mu.quick_menu();
        getline(cin, input);
        if (input == "Full Menu" || input == "Full") {
            Mu.full_menu();
        }
        if (input == "Inventory" || input == "Inve") {
            Invy.display_items();
        }
        cout << endl;
    }
    return 0;
}

