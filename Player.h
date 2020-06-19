#include <iostream>

using namespace std;

class Player{
    private:
        string name;
        int health = 100;
        int speed = 0;
        int luck = 0;
        int intel = 0;
    public:
        void create_name();
        string get_name();
        int get_health();
        void set_luck(int guesses);
        int get_luck();
        void set_speed(int hits);
        int get_speed();
        void set_intel(int correct);
        int get_intel();
};
