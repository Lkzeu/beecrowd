#include <iostream>
#include <iomanip>

int main()
{
    char operation{};
    std::cin >> operation;

    constexpr int size{ 12 };
    double numbers[size][size]{};
    for(int row = 0; row < size; ++row) {
        for(int col = 0; col < size; ++col) {
            std::cin >> numbers[row][col];
        }
    }

    double result{};
    for (int row = (size / 2) + 1; row < size; ++row) {
        for (int col = size - row; col < row; ++col) {
            result += numbers[row][col];
        }
    }

    if (operation == 'M') {
        // adaptation of N(N+1)/2 to get the sum
        // of 1 to N numbers!
        int half{ (size - 2) / 2};
        int counter{ half * (half + 1) };
        result /= counter;   // calculates average
    }
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << result << '\n';
    return 0;
}