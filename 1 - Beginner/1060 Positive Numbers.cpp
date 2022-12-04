#include <iostream>

int main() {
    int positives{};

    for (int i = 0; i < 6; ++i) {
        double x;
        std::cin >> x;
        if (x > 0) {
            ++positives;
        }
    }
    std::cout << positives << " valores positivos\n";

    return 0;
}