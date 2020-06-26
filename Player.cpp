#include "Player.h"

void Player::create_name() {
    std::string check_name = "  ";
    std::string new_name;
    while (check_name != "yes") {
        std::cout << "What is your name? ";
        getline(std::cin, new_name);
        if (not new_name.empty()) {
            check_name = ' ';
            while (check_name != "no") {
                std::cout << "Is your name " << new_name << "? (yes/no) ";
                getline(std::cin, check_name);
                if (check_name == "yes") {
                    break;
                }
            }
        }
    }
    name = new_name;
}

std::string Player::get_name() {
    return name;
}

int Player::get_health() {
    return health;
}

void Player::set_luck(int guesses) {
    switch(guesses) {
        case 2:
            luck = 10;
            break;
        case 1:
            luck = 5;
            break;
        case 0:
            luck = 1;
    }
}

int Player::get_luck() {
    return luck;
}

void Player::set_speed(int hits) {
    speed = hits / 3;
}

int Player::get_speed() {
    return speed;
}

void Player::set_intel(int correct) {
    intel = correct;
}

int Player::get_intel() {
    return intel;
}
