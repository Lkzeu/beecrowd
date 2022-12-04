#include <iostream>
#include <iomanip>

int main() {
    int positives{};
    double average{};
    for (int i = 0; i < 6; ++i) {
        double x;
        std::cin >> x;
        if (x > 0) {
            ++positives;
            average += x;
        }
    }
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << positives << " valores positivos\n";
    std::cout << (average / positives) << '\n';

    return 0;
}