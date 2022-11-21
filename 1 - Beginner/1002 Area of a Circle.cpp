/* The formula to calculate the area of a circumference is defined as A = π . R2. 
 * Considering to this problem that π = 3.14159: */

#include <iostream>

double area(double radius) {
    const double pi = 3.14159;
    return pi * (radius * radius);
}

int main() {
    double radius{ 0.0 };
    std::cin >> radius;

    std::cout.precision(4);
    std::cout << std::fixed;
    std::cout << "A=" << area(radius) << '\n';

    return 0;
}