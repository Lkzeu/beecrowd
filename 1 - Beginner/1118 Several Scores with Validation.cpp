#include <iostream>
#include <iomanip>

void get_average() {
    double average{};
    bool calculated_average{ false };
    int valid_scores{};
    while(!calculated_average) {
        double score{};
        std::cin >> score;
        if(score < 0.00 || score > 10.01) {
            std::cout << "nota invalida\n";
            continue;
        }
       
        ++valid_scores;
        average += score;
        if(valid_scores == 2) {
            average /= 2;
            calculated_average = true;
        }
    }
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "media = " << average << '\n';
}

int main() {
    get_average();

    bool stop_ask{ false };
    while(!stop_ask) {
        int answer{};
        std::cout << "novo calculo (1-sim 2-nao)\n";
        std::cin >> answer;

        switch (answer)
        {
        case 1:
            get_average();
            break;
        
        case 2:
            stop_ask = true;
            break;
        }
    }
    return 0;
}