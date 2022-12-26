#include <iostream>
#include <iomanip>

int main() 
{
    constexpr int size{ 100 };
    double numbers[size]{};
    
    double start{};
    std::cin >> start;
    numbers[0] = start;

    for (auto i = 1; i < size; ++i) {
        numbers[i] = numbers[i - 1] / 2.0;
    }

    std::cout << std::setprecision(4) << std::fixed;
    for(int i = 0; i < size; ++i) {
        std::cout << "N[" << i << "] = " << numbers[i] << '\n';
    }
}