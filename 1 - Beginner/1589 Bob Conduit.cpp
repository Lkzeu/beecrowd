#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    for (int i = 0; i < test_cases; ++i)
    {
        int r1{};
        int r2{};
        std::cin >> r1 >> r2;

        std::cout << r1 + r2 << '\n';
    }
    return 0;
}