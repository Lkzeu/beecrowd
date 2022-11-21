/* Read four integer values named A, B, C and D. 
 * Calculate and print the difference of product A and B 
 * by the product of C and D (A * B - C * D).
 */

#include <iostream>

int readNumber() {
    int x{ };
    std::cin >> x;
    return x;
}

int main() {
    const int a{ readNumber() };
    const int b{ readNumber() };
    const int c{ readNumber() };
    const int d{ readNumber() };

    std::cout << "DIFERENCA = " << (a * b) - (c * d) << '\n';
    return 0;
}