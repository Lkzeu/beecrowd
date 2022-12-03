#include <iostream>

int main() {
    int a{};
    int b{};
    std::cin >> a >> b;

    const bool areMultiples = ((a > b) ? (a % b == 0) : (b % a == 0));
    std::cout << (areMultiples ? "Sao Multiplos\n" : "Nao sao Multiplos\n");
    return 0;
}