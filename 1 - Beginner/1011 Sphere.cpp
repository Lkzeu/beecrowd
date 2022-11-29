/* Make a program that calculates and shows the volume of a sphere 
 * being provided the value of its radius (R) . 
 * The formula to calculate the volume is: (4/3) * pi * R3. 
 * Consider (assign) for pi the value 3.14159.
 */

#include <iostream>

double calculateVolume(double radius) {
    constexpr double pi = 3.14159;
    return (4/3.0) * pi * (radius * radius * radius);
}

double getRadius() {
    double radius{ };
    return std::cin >> radius, radius;
}

int main() {
    const double radius{ getRadius() };
    
    std::cout.precision(3);
    std::cout << std::fixed;
    std::cout << "VOLUME = " << calculateVolume(radius) << '\n';

    return 0;
}