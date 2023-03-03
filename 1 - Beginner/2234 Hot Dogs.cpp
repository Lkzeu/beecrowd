#include <iostream>
#include <iomanip>

int main()
{
    #ifndef ONLINE_JUDGE 
    freopen("test.txt", "r", stdin);
    #endif

    int total_hot_dogs_ate{};
    int number_participants{};
    std::cin >> total_hot_dogs_ate;
    std::cin >> number_participants;
    
    double avg_hotdogs_per_part{ 
        total_hot_dogs_ate / static_cast<double>(number_participants) };
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << avg_hotdogs_per_part << '\n';
    return 0;
}