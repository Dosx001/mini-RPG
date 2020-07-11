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
        unsigned short num1 = rand() % 9 + 1;
        unsigned short num2 = rand() % 9 + 1;
        char op = ops[rand() % 4];
        std::cout << "Whats's " << num1 << " " << op << " " << num2 << "?" << std::endl;
        std::cin >> ans;
        switch(op) {
            case '+':
                check = num1 + num2;
                break;
            case '-':
                check = num1 - num2;
                break;
            case '*':
                check = num1 * num2;
                break;
            case '/':
                check = num1 / num2;
                break;
        }
        if (ans == check) {
            std::cout << "Correct!" << std::endl;
            correct++;
        } else {
            std::cout << "Wrong. The answer is " << check << std::endl;
        }
    }
    return correct;
}

unsigned short Trials::wisdom() {
    std::string answer;
    std::string input;
    unsigned short correct = 0;
    srand(time(0));
    int question;
    for (int i = 0; i < 4; i++) {
        question = rand() % 20;
        switch(question) {
            case 0:
                std::cout << "What do you never eat for breakfast?" << std::endl;
                answer = R"([Dd]inner|[Ll]unch)";
                break;
            case 1:
                std::cout << "What gets wetter the more it dries?" << std::endl;
                answer = R"([Tt]owel)";
                break;
            case 2:
                std::cout << "What never asks a question but gets answered all the time?"
                    << std::endl;
                answer = R"([Pp]hone)";
                break;
            case 3:
                std::cout << "What goes up but never ever comes down?" << std::endl;
                answer = R"([Aa]ge)";
                break;
            case 4:
                std::cout << "What starts with “e” and ends with “e” but"
                    "only has one letter in it?" << std::endl;
                answer = R"([Ee]nvelope)";
                break;
            case 5:
                std::cout << "What key can’t open any door?" << std::endl;
                answer = R"([Mm]onkey|[Dd]onkey)";
                break;
            case 6:
                std::cout << "What has a face and two hands, but no arms or legs?" << std::endl;
                answer = R"([Cc]lock)";
                break;
            case 7:
                std::cout << "I start out tall, but the longer I stand, the shorter I grow."
                    "What am I?" << std::endl;
                answer = R"([Cc]andle)";
                break;
            case 8:
                std::cout << "How many seconds are there in a year?" << std::endl;
                answer = R"([Tt]welve|12)";
                break;
            case 9:
                std::cout << "Which weighs more, a pound of feathers or a pound of bricks?"
                    << std::endl;
                answer = R"([Nn]either)";
                break;
            case 10:
                std::cout << "How can the pocket of your pants be empty,"
                    "but still have something in it?" << std::endl;
                answer = R"([Hh]ole)";
                break;
            case 11:
                std::cout << "What has a thumb and four fingers but isn’t actually alive?"
                    << std::endl;
                answer = R"([Gg]love(s)?)";
                break;
            case 12:
                std::cout << "Imagine you’re in a room that’s filling up with water quickly."
                    "There are no windows or doors. How do you get out?" << std::endl;
                answer = R"([Ss]top imagining)";
                break;
            case 13:
                std::cout << "Everyone in the world needs it, but they usually give it without"
                    "taking it. What is it?" << std::endl;
                answer = R"([Aa]dvice)";
                break;
            case 14:
                std::cout << "What can you hold without touching it at all?" << std::endl;
                answer = R"([Cc]onversation)";
                break;
            case 15:
                std::cout << "I am an odd number. Take away one letter and I become even."
                    "What number am I??" << std::endl;
                answer = R"([Ss]even)";
                break;
            case 16:
                std::cout << "I’m light as a feather, but not even the strongest person can hold"
                    "me for more than 5 minutes. What am I?" << std::endl;
                answer = R"([Bb]reath)";
                break;
            case 17:
                std::cout << "What 5-letter word becomes shorter when you add two letters to it?"
                    << std::endl;
                answer = R"([Ss]hort)";
                break;
            case 18:
                std::cout << "What gets sharper the more you use it?" << std::endl;
                answer = R"([Bb]rain)";
                break;
            case 19:
                std::cout << "What belongs to you but gets used by everyone else more than you?"
                    << std::endl;
                answer = R"([Nn]ame)";
                break;
        }
        getline(std::cin, input);
        correct += findMatch(input, answer);
    }
    return correct;
}

int Trials::findMatch(std::string input, std::string answer) {
    std::string str (input);
    std::regex reg (answer);
    std::smatch mat;
    std::regex_search(str, mat, reg);
    if (not mat.empty()) {
        std::cout << "Correct!" << std::endl;
        return 1;
    } else {
        std::cout << "Wrong!" << std::endl;
        return 0;
    }
}

void sleep(short time) {
    clock_t startClock = clock();
    float secondsAhead = time * CLOCKS_PER_SEC;
    while (clock() < startClock + secondsAhead);
}
