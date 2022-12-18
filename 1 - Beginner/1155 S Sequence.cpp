#include <iostream>
#include <iomanip>

int main() {
    auto s{ 1.0 };
    for (auto i{ 2 }; i <= 100; ++i) {
        s += (1.0 / i);
    }
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << s << '\n';
    return 0;
}