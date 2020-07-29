#include "Maze.hpp"

void Maze::show(int& next) {
    int row = next / 37;
    int column = next % 37;
    open[(row - 1) * 37 + column] = false;
    open[(row + 1) * 37 + column] = false;
    open[row * 37 + (column - 1)] = false;
    open[row * 37 + (column + 1)] = false;
}

void Maze::display() {
    for (int i = 0; i < 851; i++) {
        if (open[i]) {
            std::cout << ' '; }
        else {
            switch(maze[i]) {
                case '0':
                   std::cout << ' ';
                   break;
                case '1':
                    std::cout << '+';
                    break;
                default:
                    std::cout << '@';
                    row = i / 37;
                    column = i % 37;
            }
        }
        if (i % 37 == 36) {
            std::cout << '\n';
        }
    }
}

bool Maze::move(std::string& input) {
    int next;
    switch(input[0]) {
        case 'w':
            next = (row - 1) * 37 + column;
            if (maze[next] == '1') {
                return false;
            }
            break;
        case 's':
            next = (row + 1) * 37 + column;
            if (maze[next] == '1') {
                return false;
            }
            break;
        case 'd':
            next = row * 37 + (column + 1);
            if (maze[next] == '1') {
                return false;
            }
            break;
        case 'a':
            next = row * 37 + (column - 1);
            if (maze[next] == '1') {
                return false;
            }
    }
    show(next);
    maze[next] = '2';
    maze[row * 37 + column] = '0';
    return true;
}

bool Maze::check(std::string& input) {
    char moves[4] = {'a', 'w', 's', 'd'};
    for (int i = 0; i < 4; i++) {
        if (moves[i] == input[0]) {
            return true;
        }
    }
    return false;
}
