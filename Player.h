#pragma once
#include "Trials.h"
#include "pch.h"

class Player{
    private:
        std::string name;
        int health = 100;
        int speed = 0;
        int luck = 0;
        int intel = 0;
    public:
        Player();
        void create_name();
        std::string get_name();
        int get_health();
        void set_luck(int guesses);
        int get_luck();
        void set_speed(int hits);
        int get_speed();
        void set_intel(int correct);
        int get_intel();
};
