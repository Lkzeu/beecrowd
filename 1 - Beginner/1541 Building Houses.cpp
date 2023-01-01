#include <iostream>
#include <cmath>

int main()
{
    int side1{};
    int side2{};
    int percentage_allowed{};

    while (std::cin >> side1 && side1 != 0) 
    {
        std::cin >> side2 >> percentage_allowed;
        int area{ side1 * side2 };
        std::cout << static_cast<int>(std::sqrt(area * (100.0 / percentage_allowed))) << '\n';
    }

    return 0;
}