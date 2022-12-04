#include <iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    int in{}, out{};
    int temp{};
    for (int i = 0; i < test_cases; ++i) {
        std::cin >> temp;
        if (temp >= 10 && temp <= 20) {
            ++in;
        }
        else {
            ++out;
        }
    }

    std::cout << in << " in\n" << out << " out\n";

    return 0;
}