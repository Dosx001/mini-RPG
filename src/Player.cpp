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
                ptrCls = new Warrior;
                break;
            }
            if (pick == "Hunter") {
                ptrInvy -> addItem("Wooden Bow");
                ptrInvy -> addItem("Rusty Dagger");
                speed = 2;
                luck = 2;
                std::cout << "Speed +2\nLuck +2\n";
                ptrCls = new Hunter;
                break;
            }
            if (pick == "Sorcerer") {
                ptrInvy -> addItem("Wooden Wand");
                ptrInvy -> addItem("Rusty Necklace");
                intel = 2;
                wisdom = 2;
                std::cout << "Intel +2\nWisdom +2\n";
                ptrCls = new Sorcerer;
                break;
            }
    }
    pick.copy(classType, pick.size() + 1);
    Ptrs Stats;
    Stats.ptrSpd = &speed;
    Stats.ptrLuk = &luck;
    Stats.ptrInt = &intel;
    Stats.ptrWid = &wisdom;
    Stats.ptrStr = &strength;
    Stats.ptrChr = &charisma;
    ptrCls -> stats = Stats;
}

void Player::setLuck(unsigned short guesses) {
    switch(guesses) {
        case 2:
            luck =+ 10;
            break;
        case 1:
            luck =+ 5;
            break;
        case 0:
            luck =+ 1;
    }
}

void Player::setSpeed(unsigned short hits) {
    speed =+ hits / 3;
}

void Player::setIntel(unsigned short correct) {
    intel =+ correct;
}

void Player::setWisdom(unsigned short correct) {
    wisdom =+ correct;
}

void Player::setStats() {
    std::cout << "You will now begin a set of trials. ";
    std::cin.ignore();
    Trials Trial;
    setLuck(Trial.luck());
    std::cout << "Your Luck stat is " << luck;
    std::cin.ignore();
    std::cin.ignore();
    setSpeed(Trial.speed());
    std::cout << "Your Speed stat is " << speed;
    std::cin.ignore();
    setIntel(Trial.intel());
    std::cout << "Your Intel stat is " << intel;
    std::cin.ignore();
    std::cin.ignore();
    setWisdom(Trial.wisdom());
    std::cout << "Your Wisdom stat is " << wisdom;
    std::cin.ignore();
}

std::string Player::getName() const {
    return name;
}

const char* Player::getClassType() const {
    return classType;
}

unsigned int Player::getHealth() const {
    return health;
}

unsigned int Player::getMana() const {
    return mana;
}

unsigned short Player::getLuck() const {
    return luck;
}

unsigned short Player::getSpeed() const {
    return speed;
}

unsigned short Player::getIntel() const {
    return intel;
}

unsigned short Player::getWisdom() const {
    return wisdom;
}

unsigned short Player::getStrength() const {
    return strength;
}

unsigned short Player::getCharisma() const {
    return charisma;
}
