#include "Player.h"

Player::Player(Inventory *Invy) {
    ptrInvy = Invy;
    createName();
    std::cout << "Hello " << name << "!" << std::endl;
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
}

void Player::setCls() {
    std::string pick = "None";
    while (true) {
        std::cout << "Pick a class! Warrior | Hunter | Sorcerer" << std::endl;
        getline(std::cin, pick);
            if (pick == "Warrior") {
                ptrInvy -> add_item("Rusty Sword");
                ptrInvy -> add_item("Rusty Shield");
                strength = 2;
                charisma = 2;
                std::cout << "Strength +2\nCharisma +2" << std::endl;
                ptrCls = new Warrior;
                break;
            }
            if (pick == "Hunter") {
                ptrInvy -> add_item("Wooden Bow");
                ptrInvy -> add_item("Rusty Dagger");
                speed = 2;
                luck = 2;
                std::cout << "Speed +2\nLuck +2" << std::endl;
                ptrCls = new Hunter;
                break;
            }
            if (pick == "Sorcerer") {
                ptrInvy -> add_item("Wooden Wand");
                ptrInvy -> add_item("Rusty Necklace");
                intel = 2;
                wisdom = 2;
                std::cout << "Intel +2\nWisdom +2" << std::endl;
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
    ptrCls -> test();
}

void Player::setLuck(int guesses) {
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

void Player::setSpeed(int hits) {
    speed =+ hits / 3;
}

void Player::setIntel(int correct) {
    intel =+ correct;
}

void Player::setStats() {
    Trials Trial;
    setLuck(Trial.luck());
    std::cout << "Your Luck stat is " << luck << std::endl;
    setSpeed(Trial.speed());
    std::cout << "Your Speed stat is " << speed << std::endl;
    setIntel(Trial.intel());
    std::cout << "Your Intel stat is " << intel << std::endl;
}

std::string Player::getName() {
    return name;
}

const char* Player::getClassType() {
    return classType;
}

int Player::getHealth() {
    return health;
}

int Player::getMana() {
    return mana;
}

int Player::getLuck() {
    return luck;
}

int Player::getSpeed() {
    return speed;
}

int Player::getIntel() {
    return intel;
}

int Player::getWisdom() {
    return wisdom;
}

int Player::getStrength() {
    return strength;
}

int Player::getCharisma() {
    return charisma;
}
