#include <iostream>
#include <vector>

using namespace std;

class Inventory{
    private:
        int size = 40;
        int num_items = 0;
        vector<string> items;
    public:
        int get_size();
        int get_num_items();
        void display_items();
        int add_item(string item);
        int remove_item(string item);
};
