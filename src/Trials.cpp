#include "Trials.hpp"

short Trials::speed() {
    std::string input;
    int array[5];
    srand(time(0));
    std::cout << "Your Speed Trial will now begin. ";
    std::cin.ignore();
    std::cout << "Sort a set of numbers as quick as possible. ";
    std::cin.ignore();
    std::cout << '\n';
    for(int i = 0; i < 5; i++) {
        array[i] = rand() % 9999 + 1;
        std::cout << array[i] << " ";
    }
    std::cout << '\n';
    int start = time(0);
    getline(std::cin, input);
    int end = time(0) - start;
    Array ans = split(input);
    std::sort(ans.nums, ans.nums + 5);
    std::sort(array, array + 5);
    int correct = 0;
    for(int i = 0; i < 5; i++) {
        if(array[i] == ans.nums[i]) {
            correct++;
        }
    }
    return end - correct;
}

short Trials::luck() {
    short guess;
    short guesses = 3;
    srand(time(0));
    short num = rand() % 9 + 1;
    std::cout << "Your Luck Trial will now begin. ";
    std::cin.ignore();
    std::cout << "Pick a number between 1 and 10: \n";
    while (0 < guesses) {
        std::cin >> guess;
        if (guess == num) {
            std::cout << "The number is " << num << "!" <<'\n';
            break;
        }
        else if (guess < num) {
            std::cout << "The number is bigger\n";
        } else {
            std::cout << "The number is smaller\n";
        }
        guesses--;
        if (0 < guesses) {
        std::cout << guesses << " more guesses. Try again!\n";
        }
    }
    if (guess != num) {
        std::cout << "Game Over\a\n";
        return guesses;
    } else {
        std::cout << "Correct!!!\a\n";
        return guesses;
    }
}

short Trials::intel() {
    char ops [4] = {'+','-','*','/'};
    float ans;
    srand(time(0));
    int correct = 0;
    float check;
    std::cout << "Your Intel Trial will now begin. ";
    std::cin.ignore();
    std::cout << "Answer as many basic math poblems you can, under a time limit. ";
    std::cin.ignore();
    long t = time(0);
    while (time(0) < t + (short) 15) {
        float num1 = rand() % 9 + 1;
        float num2 = rand() % 9 + 1;
        char op = ops[rand() % 4];
        std::cout << "Whats's " << num1 << " " << op << " " << num2 << "?\n";
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
            std::cout << "Correct!\n";
            correct++;
        } else {
            std::cout << "Wrong. The answer is " << check << '\n';
        }
    }
    return correct;
}

short Trials::wisdom() {
    std::string answer;
    std::string input;
    short correct = 0;
    srand(time(0));
    std::cout << "Your Wisdom Trial will now begin. ";
    std::cin.ignore();
    for (int i = 0; i < 4; i++) {
        int question = rand() % 20;
        switch(question) {
            case 0:
                std::cout << "What do you never eat for breakfast?\n";
                answer = R"([Dd]inner|[Ll]unch)";
                break;
            case 1:
                std::cout << "What gets wetter the more it dries?\n";
                answer = R"([Tt]owel)";
                break;
            case 2:
                std::cout << "What never asks a question but gets answered all the time?\n";
                answer = R"([Pp]hone)";
                break;
            case 3:
                std::cout << "What goes up but never ever comes down?\n";
                answer = R"([Aa]ge)";
                break;
            case 4:
                std::cout << "What starts with “e” and ends with “e” but"
                    "only has one letter in it?\n";
                answer = R"([Ee]nvelope)";
                break;
            case 5:
                std::cout << "What key can’t open any door?\n";
                answer = R"([Mm]onkey|[Dd]onkey)";
                break;
            case 6:
                std::cout << "What has a face and two hands, but no arms or legs?\n";
                answer = R"([Cc]lock)";
                break;
            case 7:
                std::cout << "I start out tall, but the longer I stand, the shorter I grow."
                    "What am I?\n";
                answer = R"([Cc]andle)";
                break;
            case 8:
                std::cout << "How many seconds are there in a year?\n";
                answer = R"([Tt]welve|12)";
                break;
            case 9:
                std::cout << "Which weighs more, a pound of feathers or a pound of bricks?\n";
                answer = R"([Nn]either)";
                break;
            case 10:
                std::cout << "How can the pocket of your pants be empty,"
                    "but still have something in it?\n";
                answer = R"([Hh]ole)";
                break;
            case 11:
                std::cout << "What has a thumb and four fingers but isn’t actually alive?\n";
                answer = R"([Gg]love(s)?)";
                break;
            case 12:
                std::cout << "Imagine you’re in a room that’s filling up with water quickly."
                    "There are no windows or doors. How do you get out?\n";
                answer = R"([Ss]top imagining)";
                break;
            case 13:
                std::cout << "Everyone in the world needs it, but they usually give it without"
                    "taking it.\nWhat is it?\n";
                answer = R"([Aa]dvice)";
                break;
            case 14:
                std::cout << "What can you hold without touching it at all?\n";
                answer = R"([Cc]onversation)";
                break;
            case 15:
                std::cout << "I am an odd number. Take away one letter and I become even."
                    "What number am I??\n";
                answer = R"([Ss]even)";
                break;
            case 16:
                std::cout << "I’m light as a feather, but not even the strongest person can hold"
                    "me for more than 5 minutes.\nWhat am I?\n";
                answer = R"([Bb]reath)";
                break;
            case 17:
                std::cout << "What 5-letter word becomes shorter"
                   " when you add two letters to it?\n";
                answer = R"([Ss]hort)";
                break;
            case 18:
                std::cout << "What gets sharper the more you use it?\n";
                answer = R"([Bb]rain)";
                break;
            case 19:
                std::cout << "What belongs to you but gets used by everyone else more than you?\n";
                answer = R"([Nn]ame)";
                break;
        }
        getline(std::cin, input);
        correct += findMatch(input, answer);
    }
    return correct;
}

short Trials::strength() {
    char hit;
    int hits = 0;
    std::cout << "Your Strength Trial will now begin. ";
    std::cin.ignore();
    std::cout << "Press any key and Enter to hit as times you can, under a time limit. ";
    std::cin.ignore();
    long t = time(0);
    while (time(0) < t + (short) 5) {
        std::cout << "hit\n";
        std::cin >> hit;
        hits++;
    }
    std::cout << "Stop!!!\a\n";
    std::cout << "Calculating...\n";
    t = time(0);
    while (time(0) < t + (short) 3) {
        std::cout << t << '\n';
        std::cin.ignore();
    }
    std::cout << t << '\n';
    std::cout << "Number of hits: \a" << hits;
    std::cin.ignore();
    return hits;
}

Array Trials::split(std::string& str_nums) {
    Array output;
    int n = 0;
    int start = 0;
    int end = 0;
    int num;
    for(int i = 0; i < (int)str_nums.length(); i++) {
        if(str_nums[i] == ' ') {
            std::stringstream str;
            str << str_nums.substr(start, end);
            str >> num;
            output.nums[n] = num;
            n++;
            start = i + 1;
            end = 0;
        } else {
            end ++;
        }
    }
    std::stringstream str;
    str << str_nums.substr(start, end);
    str >> num;
    output.nums[n] = num;
    return output;
}

int Trials::findMatch(std::string& input, std::string& answer) {
    std::string str (input);
    std::regex reg (answer);
    std::smatch mat;
    std::regex_search(str, mat, reg);
    if (not mat.empty()) {
        std::cout << "Correct!\n";
        return 1;
    } else {
        std::cout << "Wrong!\n";
        return 0;
    }
}


