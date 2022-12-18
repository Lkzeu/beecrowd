#include <iostream>

int main() {
    int number{};
    std::cin >> number;

    for(auto i = 1; i <= number; ++i) {
        if(number % i == 0) {
            std::cout << i << '\n';
        }
    }
    return 0;
}