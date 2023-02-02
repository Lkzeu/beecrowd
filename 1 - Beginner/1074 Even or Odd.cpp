#include <iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;
    
    for (int i = 0; i < test_cases; ++i) {
        int temp;
        std::cin >> temp;
        if (temp == 0) {
            std::cout << "NULL\n";
            continue;
        }
        std::string odd_or_even{ "ODD" };
        if ((temp % 2) == 0) {
            odd_or_even = "EVEN";
        }
        std::string sign{ "NEGATIVE" };
        if (temp > 0) {
            sign = "POSITIVE";
        }

        std::cout << odd_or_even << " " << sign << '\n';
    }
    return 0;
}