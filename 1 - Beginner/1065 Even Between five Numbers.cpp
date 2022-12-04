#include <iostream>

int main() {
    int even{}, odd{};
    int positive{}, negative{};
    for (int i = 0; i < 5; ++i) {
        int x;
        std::cin >> x;
        if ((x % 2) == 0) {
            ++even;
        }
        else {
            ++odd;
        }

        if (x > 0) {
            ++positive;
        }
        else if (x < 0) {
            ++negative;
        }
    }

    std::cout << even << " valor(es) par(es)\n";
    std::cout << odd << " valor(es) impar(es)\n";
    std::cout << positive << " valor(es) positivo(s)\n";
    std::cout << negative << " valor(es) negativo(s)\n";
    return 0;
}