#include <string>
#include <list>

using namespace std;

class Inventory{
    private:
        int size = 10;
        int num_items = 0;
        list<string> items[size] = {};
    public:
        int get_size();
        int get_num_items();
        list<string> get_items();
        int add_item(string item);
        int remove_item(string item);
};
