#include <string>
#include <list>

using namespace std;

class Inventory{
    private:
        int Size = 10;
        int Num_items = 0;
        list<string> Items = {};
    public:
        int getSize();
        int getNum_items();
        list<string> get_Items();
};
