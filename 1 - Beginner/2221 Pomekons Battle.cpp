#include <iostream>

struct Pomekon
{
    int attack{};
    int defense{};
    int level{};
    double value{};
};

int main()
{
    #ifndef ONLINE_JUDGE 
    freopen("test.txt", "r", stdin);
    #endif

    int test_cases{};
    std::cin >> test_cases;

    for (int test{ 0 }; test < test_cases; test++)
    {
        int bonus{};
        std::cin >> bonus;
        Pomekon guarte{};
        Pomekon dabriel{};
        std::cin >> dabriel.attack >> dabriel.defense >> dabriel.level;
        std::cin >> guarte.attack >> guarte.defense >> guarte.level;
        
        const auto& g { guarte };
        const auto& d { dabriel };

        guarte .value = ((g.attack + g.defense) / 2) + (g.level & 1 ? 0 : bonus);
        dabriel.value = ((d.attack + d.defense) / 2) + (d.level & 1 ? 0 : bonus);

        if (guarte.value > dabriel.value) 
            std::cout << "Guarte\n";
        else if (guarte.value < dabriel.value)
            std::cout << "Dabriel\n";
        else
            std::cout << "Empate\n";
    }
}