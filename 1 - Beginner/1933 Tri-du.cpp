#include <iostream>
#include <algorithm>

int main()
{
    int first_card{}; 
    int second_card{};
    std::cin >> first_card >> second_card;

    const int higher_chance_of_winning{ std::max(first_card, second_card) };
    std::cout << higher_chance_of_winning << '\n';
    return 0;
}