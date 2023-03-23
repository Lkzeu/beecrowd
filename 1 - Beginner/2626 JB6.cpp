#include <iostream>
#include <string>

class Player
{
    std::string m_subject;
    bool m_tie{ false };
    std::string m_chosed;
public:
    Player (std::string s) {
        m_subject = s;
    }

    bool tied() {
        return m_tie;
    }

    Player& fight_and_return_winner(Player& p) {
        if (this->isEqual(p))
        {
            m_tie = true;
            return *this;
        }

        if ((m_chosed == "papel" && p.m_chosed == "pedra") ||
            (m_chosed == "tesoura" && p.m_chosed == "papel") ||
            (m_chosed == "pedra" && p.m_chosed == "tesoura"))
        {
            return *this;
        }
        return p;
    }

    bool choose() {
        m_tie = false;    // reset to false in every match
        if (std::cin >> m_chosed)
            return true; 
        return false;     // raise EOF or failed to read input data
    }

    void print_subject() {
        std::cout << m_subject << '\n';
    }

    bool isEqual(Player& p) {
        return m_chosed == p.m_chosed;
    }
};

int main()
{
    constexpr char tie_msg[]{ "Putz vei, o Leo ta demorando muito pra jogar..." };

    Player Dodo("Os atributos dos monstros vao ser inteligencia, sabedoria...");
    Player Leo("Iron Maiden's gonna get you, no matter how far!");
    Player Pepper("Urano perdeu algo muito precioso..."); 
    while (Dodo.choose() && Leo.choose() && Pepper.choose())
    {   
        // if they chose the 3 possibilites at the same time, it is a tie! (e.g: papel pedra tesoura)
        if (!Dodo.isEqual(Leo) && !Dodo.isEqual(Pepper) && !Leo.isEqual(Pepper))
        {
            std::cout << tie_msg << '\n';
            continue;
        }
    
        Player& winner = Dodo.fight_and_return_winner(Leo.fight_and_return_winner(Pepper));        
        if (winner.tied())
            std::cout << tie_msg << '\n';
        else
            winner.print_subject();
    }
    return 0;
}