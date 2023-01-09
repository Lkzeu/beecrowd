#include <iostream>
#include <string>

int main()
{
    for(int i = 0; i < 3; ++i)
    {
        int number{ 0 };
        std::string crow_result{};
        std::getline(std::cin >> std::ws, crow_result);
        while(crow_result.at(0) != 'c') {   
            if (crow_result.length() == 3)
            {
                std::string bin{};
                for (auto &&letter : crow_result)
                {
                    bin += (letter == '*' ? "1" : "0");   
                }
                number += std::stoi(bin, nullptr, 2);
            }
            std::getline(std::cin >> std::ws, crow_result);
        }
        std::cout << number << '\n';
    }
}