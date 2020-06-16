#include "Trials.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int Trials::speed() {
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

short Trials::luck() {
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

int Trials::intel() {
    clock_t startClock = clock();
    float secondsAhead = (short) 10 * CLOCKS_PER_SEC; 
    char ops [4] = {'+','-','*','/'};
    int ans;
    srand(time(0));
    while (clock() < startClock + secondsAhead) {
        int num1 = rand() % 10;
        int num2 = rand() % 10;
        char op = ops[rand() % 4];
        cout << "Whats's " << num1 << " " << op << " " << num2 << "?" << endl;
        cin >> ans;
        cout << num1 + num2 << endl;
    }
    return 0;
}

void sleep() {
    clock_t startClock = clock();
    float secondsAhead = (short) 5 * CLOCKS_PER_SEC;
    while(clock() < startClock + secondsAhead);
    return;
}
