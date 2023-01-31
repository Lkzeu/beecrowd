#include <iostream>
#include <stdio.h>

int main()
{
    int number_of_stars{};
    std::cin >> number_of_stars;

    long long non_stolen_sheeps{ 0 };
    bool even_attacked{ false };
    int pos_even_attacked{};
    int zeros{ 0 };
    for (int i = 0; i < number_of_stars; ++i)
    {
        int temp{};
        scanf("%d", &temp);
        non_stolen_sheeps += temp;
        if (!even_attacked && temp == 1) { ++zeros; }

        if (!even_attacked && temp % 2 == 0) {
            even_attacked = true;
            pos_even_attacked = i + 1;
        }
    }
    
    long long take_away  { number_of_stars };
    int  stars_attacked{ pos_even_attacked ? pos_even_attacked : number_of_stars };
    if (even_attacked) {
        take_away = (stars_attacked * 2) - zeros - 1; 
    }

    non_stolen_sheeps -= take_away;
    std::cout << stars_attacked << " " << non_stolen_sheeps << '\n';
    return 0;
}