#include <iostream>
#include <string>

std::string invert(long long number)
{
    std::string reversed_number{ std::to_string(number) };
    int length{ static_cast<int>(reversed_number.length()) };
    for (int index{ length - 1 }; index >= length / 2; --index)
    {
        std::swap(reversed_number[index], reversed_number[length - index - 1]);
    }

    return reversed_number;
}

int main()
{
    long long number{};
    std::cin >> number;
    std::cout << invert(number) << '\n';
    return 0;
}