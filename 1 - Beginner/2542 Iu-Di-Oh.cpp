#include <iostream>
#include <array>

struct Card
{
    std::array<long long, 100> attributes{};
};

using Deck = std::array<Card, 100>;

void fillDeck(Deck& d, int amount_cards, int amount_attr)
{
    for (int i = 0; i < amount_cards; i++) {
        Card& card = d[i];
        for (int j = 0; j < amount_attr; j++) {
            std::cin >> card.attributes[j]; 
        }
    }
}

std::string winner(int m, int l)
{
    if (m == l)
        return "Empate";
    
    if (m > l)
        return "Marcos";
    return "Leonardo";
}

int main()
{
    //freopen("test.txt", "r", stdin);
    int amount_attr{};
    while (std::cin >> amount_attr)
    {
        int marcos_num_cards{};
        int leo_num_cards{};
        std::cin >> marcos_num_cards >> leo_num_cards;
    
        Deck marcos_deck{};
        Deck leo_deck{};
        
        fillDeck(marcos_deck, marcos_num_cards, amount_attr);
        fillDeck(leo_deck, leo_num_cards, amount_attr);

        int marcos_choosed_card{};
        int leo_choosed_card{};
        std::cin >> marcos_choosed_card >> leo_choosed_card;
        
        Card* marcos_card = &marcos_deck[marcos_choosed_card - 1];
        Card* leo_card = &leo_deck[leo_choosed_card - 1];
        
        int card_attr_2_fight{};
        std::cin >> card_attr_2_fight;

        long long marcos_status{ 
            marcos_card->attributes[card_attr_2_fight - 1] };
        long long leo_status {
            leo_card->attributes[card_attr_2_fight - 1] };

        std::cout << winner(marcos_status, leo_status) << '\n';
    }
    return 0;
}