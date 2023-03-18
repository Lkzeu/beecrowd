#include <cstdio>
#include <iostream>
#include <string>

int main()
{
    int number_players{};
    while (std::cin >> number_players)
    {
        int total_votes{ 0 };
        double votes_needed{ number_players * 2 / 3.0 };

        for (int i = 0; i < number_players; i++)
        {
            int vote{ 0 };
            std::scanf(" %d", &vote); // stdcin is slow (TLE)
            total_votes += vote;
        }
        std::string msg{ "impeachment" };
        if (total_votes < votes_needed)
            msg = "acusacao arquivada";
        std::cout << msg << '\n';
    }
    return 0;
}
