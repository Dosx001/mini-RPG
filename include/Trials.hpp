#pragma once
#include "pch.hpp"

struct Array {
    int nums[5];
};

class Trials {
    public:
        short speed();
        short luck();
        short intel();
        short wisdom();
        short test();
    private:
        int findMatch(std::string& str, std::string& reg);
        Array split(std::string str_nums);
};
