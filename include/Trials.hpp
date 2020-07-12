#pragma once
#include "pch.hpp"

class Trials{
    public:
        unsigned short speed();
        unsigned short luck();
        unsigned short intel();
        unsigned short wisdom();
    private:
        int findMatch(std::string str, std::string reg);
};

void sleep(short time);
