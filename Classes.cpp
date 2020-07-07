#include "Classes.h"

int Class::attack() {
}

int Class::defense() {
}

int Warrior::attack() {
    return 10 + *stats.ptrStr * .5;
}

int Warrior::defense() {
    return 10 + *stats.ptrChr * .5;
}

int Hunter::attack() {
    return 10 + *stats.ptrSpd * .5;
}

int Hunter::defense() {
    return 10 + *stats.ptrLuk * .5;
}

int Sorcerer::attack() {
    return 10 + *stats.ptrInt * .5;
}

int Sorcerer::defense() {
    return 10 + *stats.ptrWid * .5;
}
