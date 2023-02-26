#include <iostream>
#include <iomanip>
#include <cmath>


double fibonacci(double number)
{
    constexpr double five_root  { 2.2360679775 };  //sqrt(5)
    constexpr double first_half { (1 + five_root) / 2.0 };
    constexpr double second_half{ (1 - five_root) / 2.0 };

    return (std::pow(first_half, number) -
            std::pow(second_half, number)) / five_root;
}

int main()
{
    int number{};
    std::cin >> number;
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << fibonacci(number) << '\n';

    return 0;
}