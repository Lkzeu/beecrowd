#include <iostream>
#include <utility>
#include <cmath>

struct Champion
{
    std::pair<int, int> coordinate{};
    int speed{};
    double time_to_cast_ultimate{ 1.5 };
};

double calculate_distance(const std::pair<int, int>& a,
                          const std::pair<int, int>& b)
{
    int delta_x { b.first  - a.first  };
    int delta_y { b.second - a.second };
    return std::sqrt( (delta_x * delta_x) + (delta_y * delta_y));
}

int main()
{
    Champion fiddle{};
    Champion invasor{};
    int casting_radius{};
    int crows_radius{};
    while (std::cin >> fiddle.coordinate.first  >> fiddle.coordinate.second
                    >> invasor.coordinate.first >> invasor.coordinate.second
                    >> invasor.speed >> casting_radius >> crows_radius )
    {

        int attack_radius { casting_radius + crows_radius };
        double distance_after_running_away {
            calculate_distance(fiddle.coordinate, invasor.coordinate) +
            (fiddle.time_to_cast_ultimate * invasor.speed) };

        bool invasor_scaped { distance_after_running_away > attack_radius };
        std::cout << ( !invasor_scaped ? "Y\n" : "N\n");
    }

    return 0;
}