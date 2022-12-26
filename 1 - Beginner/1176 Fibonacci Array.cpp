#include <iostream>

int main()
{
    // since 0 <= n <= 60, it must have size 61 
    // to access 0 and 60 as valid indexes
    constexpr int size{ 61 };
    unsigned long long fib[size] {0, 1};
    for(int i = 1; i < size - 1; ++i)
    {
        fib[i+1] = fib[i] + fib[i - 1];
    }

    int test_cases{};
    std::cin >> test_cases;
    for(int i = 0; i < test_cases; ++i)
    {
        int place_in_sequence{};
        std::cin  >> place_in_sequence;
        std::cout << "Fib(" << place_in_sequence << ") = " << fib[place_in_sequence] << '\n'; 
    }
    return 0;
}