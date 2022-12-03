#include <iostream>
#include <iomanip>

double abs(double number) {
    if (number >= 0) 
        return number;
    return -number;
}

double calculatePerimeter(double a, double b, double c) {
    return (a + b + c);
}

double calculateArea(double bigBase, double base, double height) {
    return (((bigBase + base) * height) / 2);
}

bool isTriangle(double a, double b, double c) {
    return ((abs(b - c) < a && a < (b + c)) &&
            (abs(a - c) < b && b < (a + c)) &&
            (abs(a - b) < c && c < (a + b)));
}

double getValue() {
    double x{};
    std::cin >> x;
    return x;
}

int main() {
    const double a{ getValue() };
    const double b{ getValue() };
    const double c{ getValue() };

    std::cout << std::setprecision(1) << std::fixed;
    if(isTriangle(a, b, c)) {
        std::cout << "Perimetro = " << calculatePerimeter(a, b, c) << '\n';
    }
    else {
        std::cout << "Area = " << calculateArea(a, b, c) << '\n';
    }
    return 0;
}