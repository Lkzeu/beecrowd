#include <iostream>

int get_pos_person_with_min_hit(const int people[], const int size)
{
    int min{ 20 };      // hits goes from 0 to 20!
    int position{ -1 }; // invalid position so could be handle on caller
    for (int i = 0; i < size; ++i)
    {
        if (people[i] < min)
        {
            min = people[i];
            position = i;
        }
    }
    return position + 1; // position must goes from 1 to N, not 0
}

int main()
{
    int guesses{};
    std::cin >> guesses;

    int people[guesses]{};
    for (int i = 0; i < guesses; ++i)
    {
        std::cin >> people[i];
    }

    const int person_position{ get_pos_person_with_min_hit(people, guesses) };
    std::cout << person_position << '\n';
    return 0;
}