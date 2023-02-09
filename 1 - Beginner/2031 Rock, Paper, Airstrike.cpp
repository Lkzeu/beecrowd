#include <iostream>
#include <string_view>

std::string_view who_won(std::string_view player1, std::string_view player2)
{
    if (player1 == "papel" && player2 == "papel")
        return "Ambos venceram";
    
    if (player1 == "ataque")
    {
        if (player2 == "ataque")
            return "Aniquilacao mutua";
        return "Jogador 1 venceu";
    }
    
    if (player1 == "pedra")
    {
        if (player2 == "papel")
            return "Jogador 1 venceu";
        if (player2 == "pedra")
            return "Sem ganhador";
    }
    return "Jogador 2 venceu";
}

int main()
{
    int test_cases{};
    std::cin >> test_cases;
    for (int i = 0; i < test_cases; ++i)
    {
        std::string player1{};
        std::string player2{};
        std::cin >> player1 >> player2;

        std::cout << who_won(player1, player2) << '\n';
    }

    return 0;
}