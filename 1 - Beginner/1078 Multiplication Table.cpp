#include <iostream>

int main() {
    int number{};
    std::cin >> number;
    for (int i = 1; i <= 10; ++i) {
        std::cout << i << " x " << number << " = " << (i * number) << '\n';
    }

    return 0;
}