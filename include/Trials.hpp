#pragma once
#include "pch.hpp"

class Trials{
    public:
        short speed();
        short luck();
        short intel();
        short wisdom();
    private:
        int findMatch(std::string& str, std::string& reg);
};

void sleep(short time);
