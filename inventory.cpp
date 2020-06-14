#include "Inventory.h"
#include <iostream>
#include <string>
#include <list>

using namespace std;

int Inventory::get_size() {
    return size;
}

int Inventory::get_num_items() {
    return num_items;
}

list<string> Inventory::get_items() {
    return items;
}

int add_item(string item) {
    if (num_items == size) {
        cout << "Inventory is full!" << endl;
        return 0;
    }
    ++size;
    items[size] = item;
    cout << item << " has been added to your inventory!" << endl;
    return 0;
}

int remove_item(string item) {
    return 0;
}
