#include "Player.h"
#include "Trials.h"
//#include "Inventory.h"
#include <iostream>

using namespace std;

int main() { 
    Player Py;
    Py.CreateName();
    cout << "Hello " << Py.getName() << "!" << endl;
    cout << Py.getHealth() << endl;
    Trials Trial;
    Trial.luck();
    //Test.speed();
    //Test.intel();
    return 0;
}
