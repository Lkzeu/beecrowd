#include <iostream>

int main() {
    int numbers_per_line{};
    int range{};
    std::cin >> numbers_per_line >> range;
    for (auto i = 1; i <= range; ++i) {
        std::cout << i << ((i % numbers_per_line == 0) ? '\n' : ' ');
    }
    return 0;
}