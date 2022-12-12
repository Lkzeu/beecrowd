#include <iostream>
#include <cmath>

int main() {
    int iterations{};
    std::cin >> iterations;

    for (auto i = 1; i <= iterations; ++i) {
        for (auto exp = 1; exp <= 3; ++exp) {
            std::cout << std::pow(i, exp) << (exp == 3 ? "\n" : " ");
        }
    }
    return 0;
}