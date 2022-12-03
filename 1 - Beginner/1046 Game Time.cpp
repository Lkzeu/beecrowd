#include <iostream>

int main() {
    int starting_time, ending_time;
    std::cin >> starting_time >> ending_time;

    if (ending_time <= starting_time) {
        ending_time += 24;
    }

    std::cout << "O JOGO DUROU " << (ending_time - starting_time) << " HORA(S)\n"; 
    return 0;
}