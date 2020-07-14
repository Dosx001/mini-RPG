#include "Classes.hpp"

unsigned int Class::attack() {
    return 0;
}

unsigned int Class::defense() {
    return 0;
}

unsigned int Warrior::attack() {
    return 10 + *stats.ptrStr * .5;
}

unsigned int Warrior::defense() {
    return 10 + *stats.ptrChr * .5;
}

unsigned int Hunter::attack() {
    return 10 + *stats.ptrSpd * .5;
}

unsigned int Hunter::defense() {
    return 10 + *stats.ptrLuk * .5;
}

unsigned int Sorcerer::attack() {
    return 10 + *stats.ptrInt * .5;
}

unsigned int Sorcerer::defense() {
    return 10 + *stats.ptrWid * .5;
}
