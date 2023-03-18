#include <iostream>

int main()
{
    int gameplays_pub{};
    short my_id{};
    while (std::cin >> gameplays_pub >> my_id)
    {
        int my_cs_gameplays_counter{ 0 };
        for (int i = 0; i < gameplays_pub; i++)
        {
            int id{};
            bool is_lol_gameplay{};
            std::cin >> id >> is_lol_gameplay;

            if (id == my_id && !is_lol_gameplay)
                my_cs_gameplays_counter += 1;
        }
        std::cout << my_cs_gameplays_counter << '\n';
    }
    return 0;
}
