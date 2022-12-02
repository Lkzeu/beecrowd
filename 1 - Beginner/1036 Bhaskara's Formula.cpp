#include <iostream>
#include <iomanip>
#include <cmath>

double getRoots(const double a, const double b, const double delta) {
    return ((-b + delta) / (2 * a));
}

double getValue() {
    double x{};
    std::cin >> x;
    return x;
}

int main() {
    const double a{ getValue() };
    if( a == 0.00 ) {
        std::cout << "Impossivel calcular\n";
        return 0;
    }

    const double b{ getValue() };
    const double c{ getValue() };   
    const double delt { ( (b*b) - (4 * a * c) )};
    if (delt >= 0) {
        std::cout << std::setprecision(5) << std::fixed;
        std::cout << "R1 = " << getRoots(a, b, std::sqrt(delt)) << '\n';
        std::cout << "R2 = " << getRoots(a, b, -(std::sqrt(delt))) << '\n';
    }
    else {
        std::cout << "Impossivel calcular\n";
    }

    return 0;
}