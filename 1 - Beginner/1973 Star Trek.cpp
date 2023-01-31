#include <iostream>
#include <algorithm> // for std::max
#include <stdio.h>

int main()
{
    int number_of_stars{};
    std::cin >> number_of_stars;

    int* stars = new int[number_of_stars];
    long long non_stolen_sheeps{ 0 };
    for (int i = 0; i < number_of_stars; ++i)
    {
        scanf("%d", &stars[i]);  // using std::cin gives time limit exceeded!
        non_stolen_sheeps += stars[i];
    }

    int stars_attacked{ 0 };
    int i{ 0 };
    while (i >= 0 && i < number_of_stars)
    {
        int sheeps = stars[i]; 
        if (sheeps > 0)
        {
            stars_attacked = std::max(stars_attacked, i + 1);
            non_stolen_sheeps -= 1;
            stars[i] -= 1;
        }

        auto is_even = [](int number) { return number % 2 == 0; };
        i += (is_even(sheeps) ?  -1 : 1);
    }

    std::cout << stars_attacked << ' ' << non_stolen_sheeps << '\n';
    delete[] stars;
    return 0;
}