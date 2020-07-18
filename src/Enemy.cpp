#include "Enemy.hpp"

std::string Enemy::getName() {
    return name;
}

int Enemy::getHealth() {
    return health;
}

int Enemy::attack() {
    return 10;
}

bool Enemy::block(int& damage) {
    srand(time(0));
    if (rand() % 100 + 1 <= 40) {
        damage -= rand() % 10 + 1;
        if (damage < 0) {
            damage = 0;
        }
        return true;
    }
    return false;
}

bool Enemy::takeDamage(int& damage) {
    if (0 < damage) {
        health -= damage;
    }
    if (health <= 0) {
        return false;
    }
    return true;
}

void Enemy::display() {
    std::cout << "      __      _      \n"
                 "     /__\\__  //     \n"
                 "    //_____\\///     \n"
                 "   _| /-_-\\)|/_     \n"
                 "  (___\\ _ //___\\   \n"
                 "  (  |\\\\_/// * \\\\\n"
                 "   \\_| \\_((*   *)) \n"
                 "   ( |__|_\\\\  *//  \n"
                 "   (o/  _  \\_*_/    \n"
                 "   //\\__|__/\\      \n"
                 "  // |  | |  |       \n"
                 " //  _\\ | |___)     \n"
                 "//  (___|            \n";
}
