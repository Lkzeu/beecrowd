#include <iostream>

int get_number_of_orders_by(int amount_people) 
{
    auto is_even{[](int number){return number % 2 == 0;}};
    // every person ordered twice 
    int number_orders{ amount_people * 2 };
    // one or both ends of the table must be occupied to 
    // keep an even number of people that are not at the ends.
    // the person (or two of them) at the end ordered just once.
    // remove the duplicated orders:
    return is_even(amount_people) ? number_orders - 2 : number_orders - 1;
}

int main()
{
    int test_cases{};
    while (std::cin >> test_cases && test_cases != 0)
    {
        for (int test{ 0 }; test < test_cases; test++)
        {
            int amount_people{};
            std::cin  >> amount_people;
            std::cout << get_number_of_orders_by(amount_people) << '\n';
        }
    }
    return 0;
}