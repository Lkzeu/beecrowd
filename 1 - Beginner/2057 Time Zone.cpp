#include <iostream>

int main()
{
    int departure_time{};
    int travel_time{};
    int dest_time_zone{};

    std::cin >> departure_time >> travel_time >> dest_time_zone;
    
    int total_time{ ((departure_time == 0) ? 24 : departure_time) +
            travel_time + dest_time_zone };
    if (total_time >= 24)
        total_time -= 24;
    
    std::cout << total_time << '\n';
    return 0;
}