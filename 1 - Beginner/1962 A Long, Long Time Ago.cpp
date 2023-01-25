#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    constexpr int now{ 2015 };
    for (int i = 0; i < test_cases; ++i)
    {
        int years_passed{};
        std::cin >> years_passed;

        int initial_year{ now - years_passed };
        char pos_fix = initial_year > 0 ? 'D' : 'A';
        initial_year = initial_year > 0 ?  initial_year : -(initial_year - 1);

        std::cout << initial_year << " " << pos_fix << ".C.\n";
    }
    return 0;
}