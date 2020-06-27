#pragma once
#include "pch.h"

class Inventory{
    private:
        int size = 10;
        int num_items = 0;
        std::vector<std::string> items;
    public:
        int get_size();
        int get_num_items();
        void display_items();
        int add_item(std::string item);
        int remove_item(std::string item);
};
