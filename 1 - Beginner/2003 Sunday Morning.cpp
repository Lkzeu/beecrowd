#include <iostream>

int time_spent_to_reach_terminal(int hour, int min)
{
    return ((hour + 1) * 3600) + (min * 60);
}

int main()
{
    constexpr int meeting_time_in_sec{ 8 * 3600};
    int hour{};
    int min{};
    char garbage{};
    while (std::cin >> hour >> garbage >> min)
    {
        int time_spent_in_sec{ time_spent_to_reach_terminal(hour, min) };
        int maximum_delay{ 0 };
        if (time_spent_in_sec > meeting_time_in_sec)
        {
            maximum_delay = (time_spent_in_sec - meeting_time_in_sec) / 60;
        }
        std::cout << "Atraso maximo: " << maximum_delay << '\n';
    }
    return 0;
}