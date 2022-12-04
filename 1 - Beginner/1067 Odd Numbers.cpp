#include <iostream>

int main() {
    int counter{};
    std::cin >> counter;
    for (int i = 1; i <= counter; ++i) {
        if ((i % 2) != 0) {
            std::cout << i << '\n';
        }
    }
    return 0;
}