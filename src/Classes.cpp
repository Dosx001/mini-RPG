#include "Classes.hpp"

PlayerClass::PlayerClass(short& Spd, short& Luk, short& Int, short& Wid, short& Str, short& Chr)
    :speed(Spd), luck(Luk), intel(Int), wisdom(Wid), strength(Str), charisma(Chr) {}

int PlayerClass::attack() {
    return 0;
}

int PlayerClass::defense() {
    return 0;
}

int Warrior::attack() {
    return 10 + strength * .5;
}

int Warrior::defense() {
    return 10 + charisma * .5;
}

int Hunter::attack() {
    return 10 + speed * .5;
}

int Hunter::defense() {
    return 10 + luck * .5;
}

int Sorcerer::attack() {
    return 10 + intel * .5;
}

int Sorcerer::defense() {
    return 10 + wisdom * .5;
}
