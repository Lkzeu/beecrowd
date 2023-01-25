#include <iostream>
#include <string>

std::string get_roman_numeral_from(int value)
{
    std::string numeral[]{ "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int         decimal[]{ 1000, 900, 500,  400, 100,  90,   50,   40,  10,   9,   5,    4,   1 };
    
    int i{ 0 };
    std::string roman{};
    while (value > 0)
    {
        int letters = value / decimal[i];
        value = value % decimal[i];

        for (int j = 0; j < letters; ++j)
        {
            roman += numeral[i];
        }
        ++i;
    }

    return roman;
}

int main()
{
    int number{};
    std::cin >> number;
    std::cout << get_roman_numeral_from(number) << '\n';
    return 0;
}