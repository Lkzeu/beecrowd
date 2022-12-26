#include <iostream>
#include <iomanip>

int main()
{
    double values[100] {};
    std::cout << std::setprecision(1) << std::fixed;
    for(int i = 0; i < 100; ++i)
    {
        std::cin >> values[i];
        if (values[i] <= 10)
        {
            std::cout << "A[" << i << "] = " << values[i] << '\n';
        }

    }
}