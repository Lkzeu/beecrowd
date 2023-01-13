#include <iostream>
#include <iomanip>

int main()
{
    int number{};
    std::cin >> number;
    std::cout << std::uppercase << std::hex << number << '\n';

    return 0;
}