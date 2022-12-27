#include <iostream>
#include <iomanip>

int main()
{
    int column{};
    std::cin >> column;
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
    for (int row = 0; row < size; ++row) {
        result += numbers[row][column];
    }
    if (operation == 'M') {
        result /= static_cast<double>(size);  // calculates average
    }
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << result << '\n';
    return 0;
}