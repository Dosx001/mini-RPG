#include <iostream>
#include <cstdlib>

using namespace std;

class Player{
    public:
        Player(string x){
            Name = x;
        }
        void ChangeName(string x){
            Name = x;
        }
        string getName(){
            return Name;
        }
    private:
        string Name;
};
