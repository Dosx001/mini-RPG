#include "Inventory.h"

Inventory::Inventory() {
}

int Inventory::get_size() {
    return size;
}

int Inventory::get_num_items() {
    return num_items;
}

void Inventory::display_items() {
    if (num_items == 0) {
        std::cout << "Inventory is empty" << std::endl;
    } else {
        for (int i = 1; i < num_items + 1; i++) {
            if (i % 5 == 0) {
                std::cout << items[i - 1] << std::endl;
            } else {
                std::cout << items[i - 1] << " | ";
            }
        }
        for (int i = num_items + 1; i <= size; i++) {
            if (i % 5 == 0) {
                std::cout << "____" << std::endl;
            } else {
                std::cout << "____" << " | ";
            }
        }
    }
    std::cout << std::endl;
}

int Inventory::add_item(std::string item) {
    if (num_items == size) {
        std::cout << "Inventory is full!" << std::endl;
        return 0;
    }
    ++num_items;
    items.push_back(item);
    std::cout << items.at(num_items-1) << " has been added to your inventory!" << std::endl;
    return 1;
}

int Inventory::remove_item(std::string item) {
    for (int i = 0; i < num_items; i++) {
        if (item == items[i]){
            items.erase(items.begin() + i);
            std::cout << item << " has been removed." << std::endl;
            return 1;
        }
    } 
    std::cout << item << " not in Inventory." << std::endl;
    return 0;
}
