#include <iostream>

int main() {
    int iterations{};
    std::cin >> iterations;

    auto number{ 1 };
    for(auto i = 0; i < iterations; ++i) {
        auto pum{ number + 3 };
        for( ; number < pum; ++number) {
            std::cout << number << ' ';
        }
        std::cout << "PUM\n";
        ++number;
    }

    return 0;
}