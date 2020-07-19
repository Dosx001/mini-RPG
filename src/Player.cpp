#include "Player.hpp"

Player::Player(Inventory *Invy) :ptrInvy(Invy) {
    createName();
    setCls();
    setStats();
}

void Player::createName() {
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
    std::cout << "Hello " << name << "!\n";
}

void Player::setCls() {
    std::string pick = "None";
    while (true) {
        std::cout << "Pick a class! Warrior | Hunter | Sorcerer\n";
        getline(std::cin, pick);
            if (pick == "Warrior") {
                ptrInvy -> addItem("Rusty Sword");
                ptrInvy -> addItem("Rusty Shield");
                strength = 2;
                charisma = 2;
                std::cout << "Strength +2\nCharisma +2\n";
                ptrCls = new Warrior(speed, luck, intel, wisdom, strength, charisma);
                break;
            }
            if (pick == "Hunter") {
                ptrInvy -> addItem("Wooden Bow");
                ptrInvy -> addItem("Rusty Dagger");
                speed = 2;
                luck = 2;
                std::cout << "Speed +2\nLuck +2\n";
                ptrCls = new Hunter(speed, luck, intel, wisdom, strength, charisma);
                break;
            }
            if (pick == "Sorcerer") {
                ptrInvy -> addItem("Wooden Wand");
                ptrInvy -> addItem("Rusty Necklace");
                intel = 2;
                wisdom = 2;
                std::cout << "Intel +2\nWisdom +2\n";
                ptrCls = new Sorcerer(speed, luck, intel, wisdom, strength, charisma);
                break;
            }
    }
    pick.copy(classType, pick.size() + 1);
}

void Player::setLuck(Trials& Trial) {
    switch(Trial.luck()) {
        case 3:
            luck =+ 10;
            break;
        case 2:
            luck =+ 7;
            break;
        case 1:
            luck =+ 4;
            break;
        case 0:
            luck =+ 1;
    }
}

void Player::setSpeed(Trials& Trial) {
    speed =+ Trial.speed() / 3;
}

void Player::setIntel(Trials& Trial) {
    intel =+ Trial.intel();
}

void Player::setWisdom(Trials& Trial) {
    wisdom =+ Trial.wisdom();
}

void Player::setStats() {
    std::cout << "You will now begin a set of trials. ";
    std::cin.ignore();
    Trials Trial;
    setLuck(Trial);
    std::cout << "Your Luck stat is " << luck;
    std::cin.ignore();
    std::cin.ignore();
    setSpeed(Trial);
    std::cout << "Your Speed stat is " << speed;
    std::cin.ignore();
    setIntel(Trial);
    std::cout << "Your Intel stat is " << intel;
    std::cin.ignore();
    std::cin.ignore();
    setWisdom(Trial);
    std::cout << "Your Wisdom stat is " << wisdom;
    std::cin.ignore();
}

std::string Player::getName() const {
    return name;
}

const char* Player::getClassType() const {
    return classType;
}

int Player::getHealth() const {
    return health;
}

int Player::getMana() const {
    return mana;
}

short Player::getLuck() const {
    return luck;
}

short Player::getSpeed() const {
    return speed;
}

short Player::getIntel() const {
    return intel;
}

short Player::getWisdom() const {
    return wisdom;
}

short Player::getStrength() const {
    return strength;
}

short Player::getCharisma() const {
    return charisma;
}

PlayerClass* Player::getPtrCls() {
    return ptrCls;
}

bool Player::takeDamage(int& damage) {
    if (0 < damage) {
        health -= damage;
    }
    if (health <= 0) {
        return false;
    }
    return true;
}
