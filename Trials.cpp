#include "Trials.h"

unsigned short Trials::speed() {
    long t = time(0);
    std::cout << t << std::endl;
    char hit;
    int hits = 0;
    while (time(0) < t + (short) 5) {
        std::cout << "hit" << std::endl;
        std::cin >> hit;
        hits++;
    }
    std::cout << "Stop!!!\a" << std::endl;
    std::cout << "Calculating..." << std::endl;
    sleep(5);
    t = time(0);
    while (time(0) < t + (short) 3) {
        std::cin.ignore();
    }
    std::cout << "Number of hits: \a" << hits << std::endl;
    //std::cin >> hit;
    //std::cout << hit << std::endl;
    return hits;
}

unsigned short Trials::luck() {
    short num;
    short guess;
    std::cout << "Pick a number between 1 and 10: " << std::endl;
    std::cin >> guess;
    srand(time(0));
    num = rand() % 9 + 1;
    short guesses = 3;
    while (1 < guesses) { 
        guesses--;
        if (guess == num) {
            std::cout << "The number is " << num << "!" <<std::endl;
            break;
        }
        else if (guess < num) {
            std::cout << "The number is bigger" << std::endl;
        } else {
            std::cout << "The number is smaller" << std::endl;
        }
        if (0 < guesses) {
        std::cout << guesses << " more guesses. Try again!\n" << std::endl;
        }
        std::cin >> guess;
    } 
    if (guess != num) {
        std::cout << "Game Over\a" << std::endl;
        return guesses;
    } else {
        std::cout << "Correct!!!\a" << std::endl;
        return guesses;
    }
}

unsigned short Trials::intel() {
    char ops [4] = {'+','-','*','/'};
    float ans;
    srand(time(0));
    long t = time(0);
    int correct = 0;
    float check;
    while (time(0) < t + (short) 15) {
        float num1 = rand() % 10;
        float num2 = rand() % 10;
        char op = ops[rand() % 4];
        std::cout << "Whats's " << num1 << " " << op << " " << num2 << "?" << std::endl;
        std::cin >> ans;
        switch(op) {
            case '+':
                check = num1 + num2;
                if (ans == check) { 
                    std::cout << "Correct!" << std::endl;
                    correct++;
                    break;
                }
                std::cout << "Wrong. The answer is " << check << std::endl;
                break;
            case '-':
                check = num1 - num2;
                if (ans == check) {
                    std::cout << "Correct!" << std::endl;
                    correct++;
                    break;
                }
                std::cout << "Wrong. The answer is " << check << std::endl;
                break;
            case '*':
                check = num1 * num2;
                if (ans == check) {
                    std::cout << "Correct!" << std::endl;
                    correct++;
                    break;
                }
                std::cout << "Wrong. The answer is " << check << std::endl;
                break;
            case '/':
                check = num1 / num2;
                if (ans == check) {
                    std::cout << "Correct!" << std::endl;
                    correct++;
                    break;
                }
                std::cout << "Wrong. The answer is " << check << std::endl;
        }
    }
    return correct;
}

void sleep(short time) {
    clock_t startClock = clock();
    float secondsAhead = time * CLOCKS_PER_SEC;
    while (clock() < startClock + secondsAhead);
}
