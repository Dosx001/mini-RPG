#include "inventory.h"
#include <string>
#include <list>

using namespace std;

int Inventory::getSize() {
    return Size;
}

int Inventory::getNum_items() {
    return Num_items;
}

list<string> Inventory::get_Items() {
    return Items;
}
