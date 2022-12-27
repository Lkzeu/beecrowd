#include <iostream>
#include <iomanip>

double sum(double numbers[], int size)
{
    double sum{};
    for(int i = 0; i < size; ++i) {
        sum += numbers[i];
    }
    return sum;
}

int main()
{
    int line{};
    std::cin >> line;
    char operation{};
    std::cin >> operation;

    constexpr int size{ 12 };
    double numbers[size][size]{};
    for(int row = 0; row < size; ++row)
    {
        for(int col = 0; col < size; ++col)
        {
            std::cin >> numbers[row][col];
        }
    }

    double result{ sum(&numbers[line][0], size) };
    if (operation == 'M') {
        result /= static_cast<double>(size);  // calculates average
    }
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << result << '\n';
    return 0;
}