/* In this problem, the task is to read a code of a product 1, 
 * the number of units of product 1, the price for one unit of product 1, 
 * the code of a product 2, the number of units of product 2 and 
 * the price for one unit of product 2. 
 * After this, calculate and show the amount to be paid.
 */

#include <iostream>

double amountByUnit() {
    int code{ };
    int units{ };
    double price{ };
    std::cin >> code >> units >> price; 
    return units * price;
}

int main() {
    const double price_product_1{ amountByUnit() };
    const double price_product_2{ amountByUnit() };
    const double total_to_pay = price_product_1 + price_product_2;

    std::cout.precision(2);
    std::cout << std::fixed;
    std::cout << "VALOR A PAGAR: R$ " << total_to_pay << '\n';

    return 0;
}