#include <iostream>

int main()
{
    int day_1{};
    int day_2{};
    int day_3{};
    std::cin >> day_1 >> day_2 >> day_3;

    int temp_changed_day1_to_day2{ day_2 - day_1};
    int temp_changed_day2_to_day3{ day_3 - day_2};

    std::string feeling{ ":)" };
    if (temp_changed_day2_to_day3 <= temp_changed_day1_to_day2 || 
       (day_1 == day_2 && day_1 == day_3)) 
    {
        feeling = ":(";
    }
    if (temp_changed_day2_to_day3 == temp_changed_day1_to_day2 && day_3 > day_1)
    {
        feeling = ":)";
    }

    std::cout << feeling << '\n';
    return 0;
}