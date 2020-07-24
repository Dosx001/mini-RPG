#include "Classes.hpp"

PlayerClass::PlayerClass(short& Spd, short& Luk, short& Int, short& Wid, short& Str, short& Chr)
    :speed(Spd), luck(Luk), intel(Int), wisdom(Wid), strength(Str), charisma(Chr) {}

int PlayerClass::attack(int lvl) {
    return 0;
}

void PlayerClass::block(int& damage, int lvl) {
}

int Warrior::attack(int lvl) {
    return 10 + strength * .5 + lvl * .25;
}

void Warrior::block(int& damage, int lvl) {
    damage -= 10 + charisma * .5 + lvl * .25;
    if (damage < 0) {
        damage = 0;
    }
}

int Hunter::attack(int lvl) {
    return 10 + speed * .5 + lvl * .25;
}

void Hunter::block(int& damage, int lvl) {
    damage -= 10 + luck * .5 + lvl * .25;
    if (damage < 0) {
        damage = 0;
    }
}

int Sorcerer::attack(int lvl) {
    return 10 + intel * .5 + lvl * .25;
}

void Sorcerer::block(int& damage, int lvl) {
    damage -= 10 + wisdom * .5 + lvl * .25;
    if (damage < 0) {
        damage = 0;
    }
}
