#include "character_builder.h"
#include <iostream>

using namespace std;

int main() { 
    Player Py;
    Py.CreateName();
    cout << "Hello " << Py.getName() << "!" << endl;
    Tests Test;
    Test.luck();
    //Test.speed();
    //Test.intel();
    return 0;
}
