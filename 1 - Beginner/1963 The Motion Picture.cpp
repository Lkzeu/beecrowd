#include <iostream>
#include <iomanip>

template <typename T>
T percentage_increased(T old_value, T new_value)
{
    const T value_increased { new_value - old_value };
    return (100.00 * value_increased / old_value);  
}

int main()
{
    double old_ticket_price{};
    double ticket_price{};
    std::cin >> old_ticket_price >> ticket_price;

    std::cout << std::setprecision(2) << std::fixed;
    std::cout << percentage_increased(old_ticket_price, ticket_price) << "%\n";
    return 0;
}