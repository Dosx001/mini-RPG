#include "Battle.hpp"

Battle::Battle(Player& player, Enemy& enemy, Menu& menu)
    :Py(player), Ey(enemy), Mu(menu) {
    while (0 < Py.getHealth() and 0 < Ey.getHealth()) {
        EnemyStatus();
        PlayerStatus();
        PlayerTurn();
        std::cout << PyBlocks << " " << PyDamage[0] << " " << PyDamage[1] << '\n';
        EnemyPhase();
        std::cout << EyBlocks << " " << EyDamage[0] << " " << EyDamage[1] << '\n';
        DamagePhase();
    }
    if (Ey.getHealth() < 0) {
        int XP = 50;
        std::cout << '+' << XP << "XP\n";
        Py.gainXP(XP);
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
    std::cout << "attack | block | restore health | restore mana | menu\n";
    while (0 < moves) {
        std::cout << "Moves: " << moves << "/2\n";
        getline(std::cin, input);
        if (input == "attack" or input == "atk") {
            if (PyDamage[0] == 0) {
                PyDamage[0] = Py.getPtrCls() -> attack(Py.getLevel());
            } else {
                PyDamage[1] = Py.getPtrCls() -> attack(Py.getLevel());
            }
            moves--;
        } else if (input == "block") {
            PyBlocks++;
            moves--;
        } else if (input == "restore health" or input == "heal") {
            if (Py.restoreHealth()) {
                moves--;
            }
        } else if (input == "restore mana" or input == "mana") {
            if (Py.restoreMana()) {
                moves--;
            }
        } else if (input == "menu") {
            Mu.fullMenu();
        } else {
            std::cout << "attack | block | restore health | restore mana | menu\n";
        }
    }
    moves += 2;
}

void Battle::EnemyPhase() {
    while (0 < moves) {
        if (40 < Ey.getHealth()) {
            if (EyDamage[0] == 0) {
                EyDamage[0] = Ey.attack();
            } else {
                EyDamage[1] = Ey.attack();
            }
            moves--;
        } else {
            EyBlocks++;
            moves--;
        }
    }
    moves += 2;
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
                Py.getPtrCls() -> block(damage, Py.getLevel());
                PyBlocks--;
            }
            Py.takeDamage(damage);
            damage = 0;
        }
    }
}
