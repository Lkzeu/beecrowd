#include <iostream>

int main() {
    int number{};
    std::cin >> number;
    int iterations{};
    while (iterations < 6) {
        if ((number % 2) != 0) {
            std::cout << number << '\n';
            ++iterations;
        }
        ++number;
    }
    return 0;
}