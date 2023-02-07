#include <iostream>
#include <iomanip>
#include <map>

int main()
{
    const std::map<int, double> menu{{1001, 1.5}, {1002, 2.5},
        {1003, 3.5}, {1004, 4.5}, {1005, 5.5}};
    
    int number_of_products_purchased{};
    std::cin >> number_of_products_purchased;

    double total{ 0.00 };
    for (int product{ 1 }; product <= number_of_products_purchased; ++product)
    {
        int product_code{};
        int quantity_purchased{};
        std::cin >> product_code >> quantity_purchased;

        total += (menu.at(product_code) * quantity_purchased);
    }
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << total << '\n';
    return 0;
}