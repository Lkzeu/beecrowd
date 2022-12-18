#include <iostream>

int main() {
    int number{};
    std::cin >> number;
    while (number != 0) {
        number = ((number % 2 == 0) ? number : number + 1);

        auto sum{ 0 };
        for (int i = 0; i < 5; ++i) {
            sum += number;
            number += 2;
        }
        std::cout << sum << '\n';
        std::cin >> number;
    }
    return 0;
}