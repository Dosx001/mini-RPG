#include "Inventory.h"

Inventory::Inventory() {
}

int Inventory::getSize() {
    return size;
}

int Inventory::getNumItems() {
    return numItems;
}

void Inventory::displayItems() {
    if (numItems == 0) {
        std::cout << "Inventory is empty" << std::endl;
    } else {
        for (int i = 1; i < numItems + 1; i++) {
            if (i % 5 == 0) {
                std::cout << items[i - 1] << std::endl;
            } else {
                std::cout << items[i - 1] << " | ";
            }
        }
        for (int i = numItems + 1; i <= size; i++) {
            if (i % 5 == 0) {
                std::cout << "____" << std::endl;
            } else {
                std::cout << "____" << " | ";
            }
        }
    }
}

int Inventory::addItem(std::string item) {
    if (numItems == size) {
        std::cout << "Inventory is full!" << std::endl;
        return 0;
    }
    ++numItems;
    items.push_back(item);
    std::cout << items.at(numItems-1) << " has been added to your inventory!" << std::endl;
    return 1;
}

int Inventory::removeItem(std::string item) {
    for (int i = 0; i < numItems; i++) {
        if (item == items[i]){
            items.erase(items.begin() + i);
            std::cout << item << " has been removed." << std::endl;
            return 1;
        }
    } 
    std::cout << item << " not in Inventory." << std::endl;
    return 0;
}

void Inventory::addHP() {
    if (healthPotions == maxPotions) {
        std::cout << "At max capacity" << std::endl;
    } else {
        healthPotions++;
    }
}

void Inventory::addMP() {
    if (manaPotions == maxPotions) {
        std::cout << "At max capacity" << std::endl;
    } else {
        healthPotions++;
    }
}

int Inventory::getHP() {
    return healthPotions;
}

int Inventory::getMP() {
    return manaPotions;
}

int Inventory::getMaxPotions() {
    return maxPotions;
}
