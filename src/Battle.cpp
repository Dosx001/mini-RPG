#include "Battle.hpp"

Battle::Battle(Player& player, Enemy& enemy)
    :Py(player), Ey(enemy) {
    while (0 < Py.getHealth() and 0 < Ey.getHealth()) {
        EnemyStatus();
        PlayerStatus();
        PlayerTurn();
        std::cout << PyBlocks << " " << PyDamage[0] << " " << PyDamage[1] << '\n';
        EnemyPhase();
        std::cout << EyBlocks << " " << EyDamage[0] << " " << EyDamage[1] << '\n';
        DamagePhase();
    }
}

void Battle::EnemyStatus() {
    std::cout << "Name: " << Ey.getName() << " | HP: " << Ey.getHealth() << '\n';
    Ey.display();
}

void Battle::PlayerStatus() {
    std::cout << "Name: " << Py.getName() << " | HP: " << Py.getHealth()
        << " | MP: " << Py.getMana() << '\n';
}

void Battle::PlayerTurn() {
    while (0 < turns) {
        std::cin >> input;
        if (input == "attack") {
            if (PyDamage[0] == 0) {
                PyDamage[0] = Py.getPtrCls() -> attack();
            } else {
                PyDamage[1] = Py.getPtrCls() -> attack();
            }
            turns--;
        }
        if (input == "block") {
            PyBlocks++;
            turns--;
        }
    }
    turns += 2;
}

void Battle::EnemyPhase() {
    while (0 < turns) {
        if (40 < Ey.getHealth()) {
            if (EyDamage[0] == 0) {
                EyDamage[0] = Ey.attack();
            } else {
                EyDamage[1] = Ey.attack();
            }
            turns--;
        } else {
            EyBlocks++;
            turns--;
        }
    }
    turns += 2;
}

void Battle::DamagePhase() {
    for (int& damage : PyDamage) {
        if (0 < damage) {
            if (0 < EyBlocks) {
                Ey.block(damage);
                EyBlocks--;
            }
            Ey.takeDamage(damage);
            damage = 0;
        }
    }
    for (int& damage : EyDamage) {
        if (0 < damage) {
            if (0 < PyBlocks) {
                Py.getPtrCls() -> block(damage);
                PyBlocks--;
            }
            Py.takeDamage(damage);
            damage = 0;
        }
    }
}