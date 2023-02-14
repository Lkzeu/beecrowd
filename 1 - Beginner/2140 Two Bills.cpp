#include <iostream>

using paid = int;

bool give_two_bills_in_change_for(paid value) 
{
    static const int avai[]{ 100, 50, 20, 10, 5, 2 };
    for (int i = 0; i < 6; ++i)
    {
        int copy{ value - avai[i] };
        for (int j = i; j < 6 && copy >= 2; ++j)
        {
            if (copy - avai[j] == 0)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int price{};
    int paid{};

    while (std::cin >> price >> paid && price && paid)
    {
        int  dif { paid - price };
        bool is_possible { false };
        if (dif <= 200) 
        {
           is_possible = give_two_bills_in_change_for(dif);
        }
        std::cout << (is_possible ? "possible\n" : "impossible\n");
    }
    return 0;
}