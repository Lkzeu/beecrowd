#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    int test_cases{};
    std::cin >> test_cases;
    std::cout << std::fixed << std::setprecision(2);
    
    for (int test{ 0 }; test < test_cases; test++)
    {
        std::string typed{};
        std::cin  >> typed;
        std::cout << typed.length() * 1.0 / 100.0 << '\n';
    }
    return 0;
}