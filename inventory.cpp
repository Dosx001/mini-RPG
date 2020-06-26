#include "Inventory.h"

int Inventory::get_size() {
    return size;
}

int Inventory::get_num_items() {
    return num_items;
}

void Inventory::display_items() {
    for (int i = 1; i < num_items + 1; i++) {
        if (i % 5 == 0) {
            cout << items[i - 1] << endl;
        } else {
            cout << items[i - 1] << " | ";
        }
    }
    if (get_num_items() == 0) {
        cout << "Inventory is empty" << endl;
    }
    cout << endl;
}

int Inventory::add_item(string item) {
    if (num_items == size) {
        cout << "Inventory is full!" << endl;
        return 0;
    }
    ++num_items;
    items.push_back(item);
    cout << items.at(num_items-1) << " has been added to your inventory!" << endl;
    return 1;
}

int Inventory::remove_item(string item) {
    for (int i = 0; i < num_items; i++) {
        if (item == items[i]){
            items.erase(items.begin() + i);
            cout << item << " has been removed." << endl;
            return 1;
        }
    } 
    cout << item << " not in Inventory." << endl;
    return 0;
}
