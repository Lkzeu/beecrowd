#include <iostream>

enum Winner {
    tied,
    sheldon,
    raj,
};

Winner who_won(std::string& sheldon, std::string& raj)
{
    if (sheldon == raj) {
        return Winner::tied;
    }
    if (sheldon == "tesoura") {
        if (raj == "papel" || raj == "lagarto") {
            return Winner::sheldon;
        }
    }
    if (sheldon == "papel") {
        if (raj == "pedra" || raj == "Spock") {
            return Winner::sheldon;
        }
    }
    if (sheldon == "pedra") {
        if (raj == "tesoura" || raj == "lagarto") {
            return Winner::sheldon;
        }
    }
    if (sheldon == "lagarto") {
        if (raj == "papel" || raj == "Spock") {
            return Winner::sheldon;
        }
    }  
    if (sheldon == "Spock") {
        if (raj == "pedra" || raj == "tesoura") {
            return Winner::sheldon;
        }
    }
    return Winner::raj;
}

std::string sheldon_would_say(Winner& winner)
{
    switch (winner)
    {  
    case Winner::sheldon:
        return "Bazinga!";
    case Winner::raj:
        return "Raj trapaceou!";
    }
    return "De novo!";
}

int main()
{
    std::string sheldon{};
    std::string raj{};
    
    int test_cases{};
    std::cin >> test_cases;
    for (int test = 1; test <= test_cases; ++test)
    {
        std::cin >> sheldon >> raj;
        Winner winner{ who_won(sheldon, raj) };
        std::cout << "Caso #" << test << ": " << sheldon_would_say(winner) << '\n';
    }
    return 0;
}