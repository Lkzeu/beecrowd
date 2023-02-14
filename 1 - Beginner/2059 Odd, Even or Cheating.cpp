#include <iostream>

struct Player
{
    std::string players_name{};
    int  chosen_number{};
    bool chose_even_number{};
    bool is_cheating{};
    bool accused_cheating{};
};

Player* get_who_won(Player& p1, Player& p2)
{
    if (p2.accused_cheating && p1.is_cheating)
        return &p2;
    if (p1.is_cheating || p2.accused_cheating)
        return &p1;
    
    bool is_even{ (p1.chosen_number + p2.chosen_number) % 2 == 0 };
    if ((is_even && p1.chose_even_number) || (!is_even && !p1.chose_even_number))
        return &p1;
    return &p2;
}

int main()
{
    Player player1{"Jogador 1"};
    Player player2{"Jogador 2"};
    std::cin >> player1.chose_even_number >> player1.chosen_number
       >> player2.chosen_number >> player1.is_cheating >> player2.accused_cheating;

    Player* winner{ get_who_won(player1, player2)};
    std::cout << winner->players_name << " ganha!\n";
    return 0;
}