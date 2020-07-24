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
        short strength();
    private:
        Array split(std::string& str_nums);
        int findMatch(std::string& str, std::string& reg);
};
