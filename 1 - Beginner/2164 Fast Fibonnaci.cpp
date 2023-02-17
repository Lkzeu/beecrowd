#include <iostream>
#include <iomanip>
#include <cmath>

double fibonacci(double number)
{

}

int main()
{
    int number{};
    std::cin >> number;

    std::cout << std::setprecision(1) << std::fixed;
    std::cout << fibonacci(number) << '\n';
    return 0;
}