#include <string_view>
#include <iostream>
#include <iomanip>
#include <string>
#include <array>

struct Status {
    int serves{};
    int blocks{};
    int attacks{};
};

struct Player {
    std::string name{};
    Status made{};
    Status successful{};
};

inline void fill_statistics(Status* s)
{
    std::cin >> s->serves >> s->blocks >> s->attacks;
}

// try it with using namespace std haha
inline void accumulate(Status* accumulator, Status* src)
{
    accumulator->attacks += src->attacks;
    accumulator->blocks  += src->blocks;
    accumulator->serves  += src->serves;
}

inline void print(std::string_view info, int total, int successful)
{
    std::cout << info << (100.0 * successful) / total << " %.\n";
}

int main()
{
    #ifndef ONLINE_JUDGE 
    freopen("test.txt", "r", stdin);
    #endif

    std::array<Player, 100> players{};
    int num_players{};
    std::cin >> num_players;
    
    Status match_made{};
    Status match_suc{};

    for (int i{ 0 }; i < num_players; i++)
    {
        std::cin >> players[i].name;
        fill_statistics(&players[i].made);
        accumulate(&match_made, &players[i].made);

        fill_statistics(&players[i].successful);
        accumulate(&match_suc, &players[i].successful);
    }

    std::cout << std::fixed << std::setprecision(2);
    print("Pontos de Saque: ",    match_made.serves,  match_suc.serves);
    print("Pontos de Bloqueio: ", match_made.blocks,  match_suc.blocks);
    print("Pontos de Ataque: ",   match_made.attacks, match_suc.attacks);

    return 0;
}