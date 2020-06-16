#include <iostream>

using namespace std;

class Player{
    private:
        string Name;
        int Health = 100;
        int Armor = 0;
    public:
        void CreateName();
        string getName();
        int getHealth();
};
