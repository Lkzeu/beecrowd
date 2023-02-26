#include <iomanip>
#include <iostream>

double square_root(int repetitions)
{
    if (repetitions == 1)
        return  2.0;
    return 2.0 + 1.0 / square_root(--repetitions);
}

int main()
{
    int repetitions{};
    std::cin >> repetitions;

    // recursion:
    double result { 1.00 };
    if (repetitions) 
        result = 1.0 + 1.0 / square_root(repetitions);

    // loop:
    double accumulator { 0 };
    for (int i { 0 }; i < repetitions && i < 13; i++)
        accumulator = 1.0 / (accumulator + 2.0);
    
    result = 1.0 + accumulator;

    std::cout << std::fixed << std::setprecision(10);
    std::cout << result << '\n';
    return 0;
}