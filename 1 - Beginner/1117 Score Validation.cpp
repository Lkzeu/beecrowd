#include <iostream>
#include <iomanip>

int main() {
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
 
    return 0;
}