#include <iostream>
#include <string>

int main()
{
    const std::string quote{ "LIFE IS NOT A PROBLEM TO BE SOLVED" };
    
    int chars_to_show{};
    std::cin >> chars_to_show;
    for (int i = 0; i < chars_to_show; i++)
    {
        std::cout << quote.at(i);
    }
    std::cout << '\n';
    return 0;
}
