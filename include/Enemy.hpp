#pragma once
#include "Player.hpp"
#include "pch.hpp"

class Enemy {
    private:
        std::string name = "Knight";
        int health = 100;
    public:
        std::string getName();
        int getHealth();
        int attack();
        void block(int& damage);
        bool takeDamage(int& damage);
        void display();
};
