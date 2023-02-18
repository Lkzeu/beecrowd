#include <iomanip>
#include <iostream>

// any repetition greater than 7 will result
// in 3.1622776602. we could make a conditional
// on main to prevents wasting functions calls here!
double square_root(int repetitions)
{
    if (repetitions == 1)
        return  6.0;
    return 6.0 + 1.0 / square_root(--repetitions);
}

int main()
{
    int repetitions{};
    std::cin >> repetitions;

    // recursion:
    double result { 3.00 };
    if (repetitions) 
        result = 3.0 + 1.0 / square_root(repetitions);

    // loop:
    double accumulator { 0 };
    for (int i { 0 }; i < repetitions && i < 7; i++)
        accumulator = 1.0 / (accumulator + 6.0);
    
    result = 3.0 + accumulator;

    std::cout << std::fixed << std::setprecision(10);
    std::cout << result << '\n';
    return 0;
}