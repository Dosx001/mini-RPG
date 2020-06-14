#include "Player.h"
#include <iostream>

using namespace std;

void Player::CreateName() {
    char CheckName = ' ';
    string name;
    while (CheckName != 'y') {
        cout << "What is your name? ";
        getline(cin, name);
        if (not name.empty()) {
            CheckName = ' ';
            while (CheckName != 'n') {
                cout << "Is your name " << name << "? (y/n) ";
                cin >> CheckName;
                if (CheckName == 'y') {
                    break;
                }
            }
        }
    }
    Name = name;
}

string Player::getName() {
    return Name;
}

int Player::getHealth() {
    return Health;
}
