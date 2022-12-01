/* Read an integer value corresponding to a person's age (in days) and print it in years, months and days, 
 * followed by its respective message “ano(s)”, “mes(es)”, “dia(s)”.
 * Note: only to facilitate the calculation, consider the whole year with 365 days and 30 days every month.
 * In the cases of test there will never be a situation that allows 12 months and some days, like 360, 363 or 364. This is just an exercise for the purpose of testing simple mathematical reasoning.
 */

#include <iostream>

int main() {
    int days{};
    std::cin >> days;

    const int years{ days / 365 };
    const int months{ (days %= 365, days / 30) };
    std::cout << years << " ano(s)\n" 
              << months << " mes(es)\n" << days % 30 << " dia(s)\n";
    
    return 0;
}