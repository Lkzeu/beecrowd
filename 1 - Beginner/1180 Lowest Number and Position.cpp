#include <iostream>
#include <limits>

int main()
{
    int size{};
    std::cin >> size;
    int numbers[size]{};
    int lowest  { std::numeric_limits<int>::max() };
    int position{ -1 };
    for(int i = 0; i < size; ++i)
    {
        std::cin >> numbers[i];
        if (numbers[i] < lowest) 
        {
            lowest   = numbers[i];
            position = i;
        }    
    }

    std::cout << "Menor valor: " << lowest   << '\n';
    std::cout << "Posicao: "     << position << '\n';
}