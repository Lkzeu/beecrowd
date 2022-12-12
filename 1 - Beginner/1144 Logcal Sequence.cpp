#include <iostream>
#include <cmath>

int main() {
    int iterations{};
    std::cin  >> iterations;
    std::cout << std::fixed;
    auto lastExp{ 3 }; // easily extensible to more exponatiations
    for (auto i = 1; i <= iterations; ++i) {
        for (auto exp = 1; exp <= lastExp; ++exp) {
            std::cout << static_cast<int>(std::pow(i, exp)) << (exp == lastExp ? "\n" : " ");
        }
        for (auto exp = 1; exp <= lastExp; ++exp) {
            std::cout << static_cast<int>(std::pow(i, exp)) + (exp > 1 ? 1 : 0);
            std::cout << (exp == lastExp ? "\n" : " ");
        }
    }
    return 0;
}