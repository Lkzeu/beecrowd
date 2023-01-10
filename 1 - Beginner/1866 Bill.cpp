#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    for (int i = 0; i < test_cases; ++i)
    {
        int terms_to_sum{};
        std::cin >> terms_to_sum;

        // Given a number of terms to use in sum, 
        // sum = 1 - 1 + 1 - 1...
        // So, if it has a even number of terms, it will always be 0.
        int sum{ terms_to_sum % 2 };
        std::cout << sum << '\n';
    }
}