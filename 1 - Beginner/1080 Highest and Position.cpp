#include <iostream>

int main() {
    int highest{};
    int position{};

    constexpr int test_cases{ 100 };
    for (int i = 1; i <= test_cases; ++i) {
        int input{};
        std::cin >> input;
        if (input > highest) {
            highest = input;
            position = i;
        }
    }

    std::cout << highest << '\n' << position << '\n';
    return 0;
}