#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;
    for (int i = 0; i < test_cases; ++i)
    {
        std::string player1[2];
        std::string player2[2];

        std::cin >> player1[0];  // player's name
        std::cin >> player1[1];  // option: "PAR" or "IMPAR"
        std::cin >> player2[0];
        std::cin >> player2[1];

        int number1{}, number2{};
        std::cin >> number1 >> number2;
        bool isEven{ (number1 + number2) % 2 == 0};
        if((player1[1] == "PAR"   &&  isEven) ||
           (player1[1] == "IMPAR" && !isEven))
        {
            std::cout << player1[0] << '\n';
            continue;
        }
        std::cout << player2[0] << '\n';
    }
    return 0;    
}