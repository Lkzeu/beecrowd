#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    int number{};
    std::cin >> number;
    
    const double minimum{ number / std::log(number) };
    const double maximum{ 1.25506 * minimum };
    
    std::cout << std::fixed << std::setprecision(1);
    std::cout << minimum << ' ' << maximum << '\n';
    return 0;
}