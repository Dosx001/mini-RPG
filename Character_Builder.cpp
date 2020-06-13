#include "character_builder.h"
#include "inventory.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <list>

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

int Tests::speed() {
    long t = time(0);
    cout << t << endl;
    char hit;
    int hits = 0;
    while (time(0) < t + (short) 5) {
        cout << "hit" << endl;
        cin >> hit;
        hits++;
    }
    cout << "Stop!!!\a" << endl;
    cout << "Calculating..." << endl;
    sleep();
    cout << "Number of hits: \a" << hits << endl;
    cin >> hit;
    cout << hit << endl;
    return hits;
}

short Tests::luck() {
    short num;
    short guess;
    cout << "Pick a number between 1 and 10: " << endl;
    cin >> guess;
    srand(time(0));
    num = rand() % 9 + 1;
    short guesses = 3;
    while (1 < guesses) { 
        --guesses;
        if (guess == num) {
            cout << "The number is " << num << "!" <<endl;
            break;
        }
        else if (guess < num) {
            cout << "The number is bigger" << endl;
        } else {
            cout << "The number is smaller" << endl;
        }
        if (0 < guesses) {
        cout << guesses << " more guesses. Try again!\n" << endl;
        }
        cin >> guess;
    } 
    if (guess != num) {
        cout << "Game Over\a" << endl;
        return guesses;
    } else {
        cout << "Correct!!!\a" << endl;
        return guesses;
    }
}

int Tests::intel() {
    list<const char*> ops = {"+","-","*","/"};
    list<int> nums = {1,2,3,4};
    cout << "" << endl;
    return 0;
}

void sleep() {
    clock_t startClock = clock();
    float secondsAhead = (short) 5 * CLOCKS_PER_SEC;
    while(clock() < startClock+secondsAhead);
    return;
}
