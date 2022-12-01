/* Read an integer value, which is the duration in seconds of a certain event in a factory, 
 * and inform it expressed in hours:minutes:seconds.
 */

#include <iostream>

int main() {
    int seconds{};
    std::cin >> seconds;

    const int hours{ seconds / 3600 };
    const int min{ (seconds %= 3600, seconds / 60) };
    std::cout << hours << ':' << min << ':' << seconds % 60 << '\n';

    return 0;
}