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

bool Maze::move() {
    char input;
    std::cin >> input;
    int next;
    switch(input) {
        case 'w':
            next = (row - 1) * 37 + column;
            if (maze[next] == '1') {
                return false;
            }
            maze[next] = '2';
            break;
        case 's':
            next = (row + 1) * 37 + column;
            if (maze[next] == '1') {
                return false;
            }
            maze[next] = '2';
            break;
        case 'd':
            next = row * 37 + (column + 1);
            if (maze[next] == '1') {
                return false;
            }
            maze[next] = '2';
            break;
        case 'a':
            next = row * 37 + (column - 1);
            if (maze[next] == '1') {
                return false;
            }
            maze[next] = '2';
            break;
        default:
            return false;
    }
    show(next);
    maze[row * 37 + column] = '0';
    return true;
}
