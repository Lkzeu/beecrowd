#include <iostream>

int main() {
    int number{};
    std::cin >> number;

    int end = ((number % 2) == 0) ? number : number - 1;
    for (int i { 2 }; i <= end; i += 2 ) {
        std::cout << i << "^2 = " << (i*i) << '\n';
    }

    return 0;
}