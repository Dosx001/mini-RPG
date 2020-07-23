#include "Inventory.hpp"

short Inventory::getSize() const {
    return size;
}

short Inventory::getNumItems() const {
    return numItems;
}

void Inventory::displayItems() {
    if (numItems == 0) {
        std::cout << "Inventory is empty\n";
    } else {
        for (short i = 1; i < numItems + 1; i++) {
            if (i % 5 == 0) {
                std::cout << items[i - 1] << "\n";
            } else {
                std::cout << items[i - 1] << " | ";
            }
        }
        for (short i = numItems + 1; i <= size; i++) {
            if (i % 5 == 0) {
                std::cout << "____\n";
            } else {
                std::cout << "____" << " | ";
            }
        }
    }
}

bool Inventory::addItem(std::string item) {
    if (numItems == size) {
        std::cout << "Inventory is full!\n";
        return false;
    }
    ++numItems;
    items.push_back(item);
    std::cout << items.at(numItems-1) << " has been added to your inventory!\n";
    return true;
}

bool Inventory::removeItem(std::string item) {
    for (short i = 0; i < numItems; i++) {
        if (item == items[i]){
            items.erase(items.begin() + i);
            --numItems;
            std::cout << item << " has been removed.\n";
            return true;
        }
    }
    std::cout << item << " not in Inventory.\n";
    return false;
}

void Inventory::addHP() {
    if (healthPotions == maxPotions) {
        std::cout << "At max capacity\n";
    } else {
        healthPotions++;
    }
}

void Inventory::addMP() {
    if (manaPotions == maxPotions) {
        std::cout << "At max capacity\n";
    } else {
        manaPotions++;
    }
}

void Inventory::removeHP() {
    healthPotions -= 1;
}

void Inventory::removeMP() {
    manaPotions -= 1;
}

short Inventory::getHP() const {
    return healthPotions;
}

short Inventory::getMP() const {
    return manaPotions;
}

short Inventory::getMaxPotions() const {
    return maxPotions;
}
