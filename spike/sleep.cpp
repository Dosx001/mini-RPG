#include <iostream>

void sleep(short time) {
    clock_t startClock = clock();
    float secondsAhead = time * CLOCKS_PER_SEC;
    while (clock() < startClock + secondsAhead);
}

int main() {
    sleep(5);
    return 0;
}
