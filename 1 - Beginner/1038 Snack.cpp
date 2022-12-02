#include <iostream>
#include <iomanip>

int getInteger() {
    int x{};
    std::cin >> x;
    return x;
}
int main() {
    double prices[]{4.00, 4.50, 5.00, 2.00, 1.50};
    const int code{getInteger()};
    const int quantity{getInteger()};

    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Total: R$ " << prices[code - 1] * quantity << '\n';
    return 0;
}