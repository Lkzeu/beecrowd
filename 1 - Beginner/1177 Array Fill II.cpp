#include <iostream>

int main() 
{
    constexpr int size{ 1000 };
    int numbers[size]{};
    
    int repeat_until{};
    std::cin >> repeat_until;

    int value{ 0 };
    for (auto i = 0; i < size; ++i) {
        numbers[i] = value;
        
        ++value;
        if(value == repeat_until) {
            value = 0;
        }
    }

    for(int i = 0; i < size; ++i) {
        std::cout << "N[" << i << "] = " << numbers[i] << '\n';
    }
}