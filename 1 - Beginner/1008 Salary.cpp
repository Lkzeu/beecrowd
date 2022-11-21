/* Write a program that reads an employee's number,
 * his/her worked hours number in a month and the amount he received per hour. 
 * Print the employee's number and salary that he/she will receive
 * at end of the month, with two decimal places.
 */

#include <iostream>

double readValuePerHour() {
    double x{ };
    std::cin >> x;
    return x;
}

int readNumber() {
    return static_cast<int> (readValuePerHour());
}

int main() {
    const int employer_code{ readNumber() };
    const int hours_worked{ readNumber() };
    const double value_per_hour{ readValuePerHour() };

    std::cout << "NUMBER = " << employer_code << '\n';
    std::cout.precision(2);
    std::cout << std::fixed;
    std::cout << "SALARY = U$ " << value_per_hour * hours_worked << '\n';

    return 0;
}