#include <string>

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

class Tests{
    public:        
        int speed();
        short luck(); 
        int intel(); 
};

void sleep(); 
