#include <iostream>
#include "pch.hpp"

class Maze {
    private:
        short row;
        short column;
        char maze[851] = {
            '1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','0','1',
            '1','0','0','0','0','0','0','0','1','0','0','0','1','0','0','0','0','0','1','0','0','0','0','0','0','0','0','0','1','0','1','0','0','0','1','0','1',
            '1','0','1','1','1','1','1','0','1','0','1','0','1','0','1','1','1','0','1','0','1','1','1','0','1','1','1','0','1','0','1','0','1','0','1','0','1',
            '1','0','1','0','0','0','1','0','1','0','1','0','1','0','0','0','1','0','1','0','1','0','0','0','1','0','0','0','0','0','1','0','1','0','1','0','1',
            '1','0','1','0','1','0','1','0','1','1','1','0','1','1','1','0','1','0','1','1','1','0','1','1','1','1','1','1','1','0','1','0','1','1','1','0','1',
            '1','0','1','0','1','0','1','0','0','0','0','0','0','0','0','0','1','0','0','0','1','0','0','0','0','0','0','0','1','0','0','0','1','0','1','0','1',
            '1','0','1','0','1','0','1','1','1','1','1','1','1','1','1','1','1','1','1','0','1','1','1','1','1','1','1','0','1','1','1','1','1','1','1','0','1',
            '1','0','1','0','1','0','0','0','1','0','0','0','0','0','0','0','0','0','1','0','0','0','0','0','0','0','1','0','0','0','1','0','0','0','0','0','1',
            '1','0','1','1','1','0','1','0','1','0','1','1','1','1','1','1','1','0','1','1','1','1','1','1','1','0','1','0','1','0','1','0','1','1','1','1','1',
            '1','0','0','0','0','0','1','0','1','0','0','0','0','0','1','0','1','0','0','0','0','0','0','0','1','0','1','0','1','0','1','0','0','0','0','0','1',
            '1','0','1','1','1','0','1','0','1','1','1','1','1','0','1','0','1','1','1','1','1','1','1','0','1','0','1','1','1','0','1','1','1','1','1','0','1',
            '1','0','0','0','1','0','1','0','0','0','0','0','1','0','1','0','0','0','0','0','0','0','1','0','1','0','0','0','0','0','0','0','0','0','1','0','1',
            '1','1','1','1','1','1','1','1','1','1','1','0','1','0','1','0','1','0','1','1','1','0','1','0','1','1','1','1','1','1','1','1','1','0','1','0','1',
            '1','0','0','0','0','0','0','0','0','0','0','0','1','0','1','0','1','0','0','0','1','0','1','0','0','0','0','0','0','0','1','0','1','0','1','0','1',
            '1','0','1','0','1','1','1','1','1','1','1','1','1','0','1','0','1','1','1','0','1','0','1','1','1','1','1','1','1','0','1','0','1','0','1','0','1',
            '1','0','1','0','1','0','0','0','0','0','0','0','0','0','1','0','1','0','0','0','1','0','0','0','0','0','1','0','1','0','1','0','0','0','1','0','1',
            '1','0','1','0','1','0','1','1','1','1','1','1','1','1','1','1','1','0','1','1','1','1','1','1','1','0','1','0','1','0','1','0','1','1','1','0','1',
            '1','0','1','0','1','0','0','0','1','0','0','0','1','0','0','0','1','0','0','0','1','0','0','0','0','0','1','0','1','0','1','0','1','0','0','0','1',
            '1','1','1','0','1','1','1','0','1','0','1','0','1','0','1','1','1','1','1','0','1','0','1','1','1','1','1','0','1','0','1','1','1','0','1','1','1',
            '1','0','0','0','0','0','0','0','1','0','1','0','1','0','0','0','0','0','1','0','1','0','0','0','1','0','0','0','1','0','0','0','1','0','0','0','1',
            '1','0','1','0','1','1','1','1','1','0','1','0','1','1','1','1','1','0','1','0','1','1','1','0','1','0','1','0','1','1','1','0','1','1','1','0','1',
            '1','0','1','0','0','0','0','0','0','0','1','0','0','0','0','0','0','0','1','0','0','0','1','0','0','0','1','0','0','0','1','0','0','0','0','0','1',
            '1','2','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'};
        bool open[851] = {
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            true,false,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,
            false,false,false,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true};
        void show(int& next);
    public:
        void display();
        bool move();
};
