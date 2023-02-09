#include <iostream>
#include <iomanip>

namespace constants
{
    inline constexpr double pi { 3.14 };
}

int main()
{
    double volume{};
    double diameter{};
    
    std::cout << std::setprecision(2) << std::fixed;
    while (std::cin >> volume >> diameter)
    {
        const double radius     { diameter / 2.0 };
        const double mouth_area { radius * radius * constants::pi };
        const double height     { volume / mouth_area };

        std::cout << "ALTURA = " << height << '\n';
        std::cout << "AREA = " << mouth_area << '\n';
    }

    return 0;
}