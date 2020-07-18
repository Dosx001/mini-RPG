#pragma once
#include "Player.hpp"
#include "Enemy.hpp"
#include "pch.hpp"

class Battle {
    private:
        Player& Py;
        Enemy& Ey;
        std::string input;
        int turns = 2;
        int PyDamage[2] = {0, 0};
        int PyBlocks = 0;
        int EyDamage[2] = {0, 0};
        int EyBlocks = 0;
    public:
        Battle(Player& player, Enemy& enemy);
        void EnemyStatus();
        void PlayerStatus();
        void PlayerTurn();
        void EnemyPhase();
        void DamagePhase();
};
