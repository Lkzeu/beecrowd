/* Make a program that reads three floating point values: A, B and C. 
 * Then, calculate and show:
 * a) the area of the rectangled triangle that has base A and height C.
 * b) the area of the radius's circle C. (pi = 3.14159)
 * c) the area of the trapezium which has A and B by base, and C by height.
 * d) the area of ​​the square that has side B.
 * e) the area of the rectangle that has sides A and B.
 */

#include <iostream>

double areaRectangle(double base, double height) {
    return base * height;
}

double areaRectangledTriangle(double base, double height) {
    return (areaRectangle(base, height)) / 2;
}

double areaTrapezium(double bigbase, double base, double height) {
    return (areaRectangle(bigbase + base, height)) / 2;
}

// I could keep using areaRectangle to calculate the areas for all functions bellow because
// its essentially x * y, but I'll not do it due to radius be so semantically different from base
double areaCircle(double radius) {
    constexpr double pi = 3.14159;
    return pi * (radius * radius);
}

double areaSquare(double side) {
    return side * side;
}


int main() {
    double a{};
    double b{};
    double c{};
    std::cin >> a >> b >> c;

    std::cout.precision(3);
    std::cout << std::fixed;
    std::cout << "TRIANGULO: " << areaRectangledTriangle(a, c) << '\n';
    std::cout << "CIRCULO: " << areaCircle(c) << '\n';
    std::cout << "TRAPEZIO: " << areaTrapezium(a, b, c) << '\n';
    std::cout << "QUADRADO: " << areaSquare(b) << '\n';
    std::cout << "RETANGULO: " << areaRectangle(a, b) << '\n';
    return 0;
}