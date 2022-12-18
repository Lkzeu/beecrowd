#include <iostream>

int growth_year(int population, double grow_rate_percentage) {
    population += static_cast<int>(population * (grow_rate_percentage / 100));
    return population;
}

int main() {
    int test_cases{};
    std::cin >> test_cases;

    for(int i = 0; i < test_cases; ++i) {
        int population_a{}, population_b{};
        std::cin >> population_a >> population_b;

        double grow_rate_a{}, grow_rate_b{};
        std::cin >> grow_rate_a >> grow_rate_b;

        auto years{ 0 };
        while(years <= 100 && population_a <= population_b) {
            population_a = growth_year(population_a, grow_rate_a);
            population_b = growth_year(population_b, grow_rate_b);
            ++years;
        }

        if(years > 100) {
            std::cout << "Mais de 1 seculo.\n";
            continue;
        }
        std::cout << years << " anos.\n";
    }

    return 0;
}