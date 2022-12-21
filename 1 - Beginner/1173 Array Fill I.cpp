#include <iostream>

int main() 
{
    constexpr int size{ 10 };
    int numbers[size]{};
    int value{};
    std::cin >> value;

    for (auto i = 0; i < size; ++i) {
        numbers[i] = value;
        value *= 2;
    }

    for(int i = 0; i < size; ++i) {
        std::cout << "N[" << i << "] = " << numbers[i] << '\n';
    }
}