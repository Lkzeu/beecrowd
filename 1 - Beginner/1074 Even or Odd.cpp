#include <iostream>
#include <iomanip>

int main() {
    int test_cases{};
    std::cin >> test_cases;
    std::string positive{};
    std::string odd{};
    for (int i = 0; i < test_cases; ++i) {
        int x;
        std::cin >> x;
        if (x == 0) {
            std::cout << "NULL\n";
            continue;
        }

        if ((x % 2) == 0) {
            odd = "EVEN";
        }
        else {
            odd = "ODD";
        }

        if (x > 0) {
            positive = "POSITIVE";
        }
        else {
            positive = "NEGATIVE";
        }
        std::cout << odd << " " << positive << '\n';
    }
    return 0;
}