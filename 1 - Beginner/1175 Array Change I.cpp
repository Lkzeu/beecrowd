#include <iostream>

int main()
{
    int numbers[20]{};

    for(int i = 0; i < 20; ++i)
    {
        std::cin >> numbers[i];
    }

    for(int i = 0; i < 10; ++i)
    {
        int tmp{ numbers[i] };
        int last{ 19 - i };
        numbers[i] = numbers[last];
        numbers[last] = tmp;
    }

    for(int i = 0; i < 20; ++i)
    {
        std::cout << "N[" << i << "] = " << numbers[i] << '\n';
    }
}