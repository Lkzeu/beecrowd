#include <iostream>

int get_factorial(int number) {
    if (number < 2) { 
        return 1;
    }
    return number * get_factorial(number - 1);
}

int main() {
    int number{};
    std::cin >> number;

    int factorial{ get_factorial(number) };
    std::cout << factorial << '\n';

    return 0;
}