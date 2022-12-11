#include <iostream>
std::string who_won(int inter, int gremio) {
    if (inter > gremio) {
        return "Inter venceu mais\n";
    }
    if (gremio > inter) {
        return "Gremio venceu mais\n";
    }
    return "Não houve vencedor\n";
}

int main() {
    int inter{}, gremio{}, grenais{};

    bool playing{true};
    while(playing) {
        ++grenais;
        int goalInt{}, goalGre{};
        std::cin >> goalInt >> goalGre;

        if(goalInt > goalGre) {
            ++inter;
        }
        else if (goalGre > goalInt) {
            ++gremio;
        }
        
        int answer{};
        std::cout << "Novo grenal (1-sim 2-nao)\n";
        std::cin >> answer;
        if(answer == 2) {
            playing = false;
        }
    }

    std::cout << grenais << " grenais\n";
    std::cout << "Inter:" << inter << "\nGremio:"<< gremio << '\n';
    std::cout << "Empates:" << grenais - (inter + gremio) << '\n';
    
    std::cout << who_won(inter, gremio);
    return 0;
}