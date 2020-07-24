#include "Player.hpp"

Player::Player(Inventory& Invy) :Invy(Invy) {
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
                Invy.addItem("Rusty Sword");
                Invy.addItem("Rusty Shield");
                strength = 2;
                charisma = 2;
                std::cout << "Strength +2\nCharisma +2\n";
                ptrCls = new Warrior(speed, luck, intel, wisdom, strength, charisma, level);
                break;
            }
            if (pick == "Hunter") {
                Invy.addItem("Wooden Bow");
                Invy.addItem("Rusty Dagger");
                speed = 2;
                luck = 2;
                std::cout << "Speed +2\nLuck +2\n";
                ptrCls = new Hunter(speed, luck, intel, wisdom, strength, charisma, level);
                break;
            }
            if (pick == "Sorcerer") {
                Invy.addItem("Wooden Wand");
                Invy.addItem("Rusty Necklace");
                intel = 2;
                wisdom = 2;
                std::cout << "Intel +2\nWisdom +2\n";
                ptrCls = new Sorcerer(speed, luck, intel, wisdom, strength, charisma, level);
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
    short score = Trial.speed();
    if(score <= 8) {
        speed =+ 10;
    } else if(score <= 10) {
        speed =+ 7;
    } else if(score <= 12) {
        speed =+ 4;
    } else {
        speed =+ 1;
    }
}

void Player::setIntel(Trials& Trial) {
    intel =+ Trial.intel();
}

void Player::setWisdom(Trials& Trial) {
    switch(Trial.wisdom()) {
        case 4:
            wisdom =+ 10;
            break;
        case 3:
            wisdom =+ 7;
            break;
        case 2:
            wisdom =+ 5;
            break;
        case 1:
            wisdom =+ 3;
            break;
        case 0:
            wisdom =+ 1;
    }
}

void Player::setStrength(Trials& Trial) {
    speed =+ Trial.speed() / 3;
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
    Trial.speed();
    std::cout << "Your Strength stat is " << strength;
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

int Player::getMaxHealth() const {
    return maxHealth;
}

int Player::getMana() const {
    return mana;
}

int Player::getMaxMana() const {
    return maxMana;
}

int Player::getLevel() const {
    return level;
}

int Player::getExperience() const {
    return experience;
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

bool Player::restoreHealth() {
    if (health == maxHealth) {
        std::cout << "At max Health.\n";
        return false;
    }
    if(Invy.getHP() != 0) {
        health += 50;
        if(maxHealth < health) {
            health = maxHealth;
        }
        Invy.removeHP();
        std::cout << "-1 Health Potion" << '\n' << "Health: " << health << '\n';
        return true;
    }
    std::cout << "No Health Potions available.\n";
    return false;
}

bool Player::restoreMana() {
    if (mana == maxMana) {
        std::cout << "At max Mana.\n";
        return false;
    }
    if(Invy.getMP() != 0) {
        mana += 50;
        if(maxMana < mana) {
            mana = maxMana;
        }
        Invy.removeMP();
        std::cout << "-1 Mana Potion" << '\n' << "Mana: " << mana << '\n';
        return true;
    }
    std::cout << "No Mana Potions available.\n";
    return false;
}

void Player::gainXP(int& XP) {
    experience += XP;
    int lvl = (level + 1) * (level + 1) + 50;
    if (lvl < experience) {
        experience = experience - lvl;
        level++;
        maxHealth += 50;
        health = maxHealth;
        maxMana += 50;
        mana = maxMana;
        int SP = 2;
        std::string input;
        while (0 < SP) {
            std::cout << "Upgrade: speed | luck | intel | wisdom | strength | charisma\n";
            std::cin >> input;
            if (input == "speed") {
                speed++;
            } else if (input == "luck") {
                luck++;
            } else if (input == "intel") {
                intel++;
            } else if (input == "wisdom") {
                wisdom++;
            } else if (input == "strength") {
                strength++;
            } else if (input == "charisma") {
                charisma++;
            } else {
                SP++;
            }
            SP--;
        }
    }
}
