#include "Classes.hpp"

PlayerClass::PlayerClass(short& Spd, short& Luk, short& Int, short& Wid, short& Str, short& Chr)
    :speed(Spd), luck(Luk), intel(Int), wisdom(Wid), strength(Str), charisma(Chr) {}

int PlayerClass::attack() {
    return 0;
}

void PlayerClass::block(int& damage) {
}

int Warrior::attack() {
    return 10 + strength * .5;
}

void Warrior::block(int& damage) {
    damage -= 10 + charisma * .5;
    if (damage < 0) {
        damage = 0;
    }
}

int Hunter::attack() {
    return 10 + speed * .5;
}

void Hunter::block(int& damage) {
    damage -= 10 + luck * .5;
    if (damage < 0) {
        damage = 0;
    }
}

int Sorcerer::attack() {
    return 10 + intel * .5;
}

void Sorcerer::block(int& damage) {
    damage -= 10 + wisdom * .5;
    if (damage < 0) {
        damage = 0;
    }
}
