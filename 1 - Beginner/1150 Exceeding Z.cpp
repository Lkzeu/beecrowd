/* Write a program that reads two integers: X and Z (Z must be read as many times as necessary,
 * until a number greater than X is read). Count how many integers must be summed in sequence 
 * (starting at and including X) so that the sum exceeds Z the minimum possible and writes this number.
 */

#include <iostream>

int main() {
    int x{}, z{};
    std::cin >> x;
    while(z <= x) {
        std::cin >> z;
    }

    int counter{ 0 };
    for (auto sum{ 0 }; sum < z; ++x) {
        sum += x;
        ++counter;
    }

    std::cout << counter << '\n';

    return 0;
}