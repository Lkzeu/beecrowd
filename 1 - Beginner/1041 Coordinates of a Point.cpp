#include <iostream>

double getValue() {
    double x;
    std::cin >> x;
    return x;
}

std::string getQ(const double y, const std::string q1, const std::string q2) {
    std::string point{};
    if(y > 0.00) {
        point = q1;
    }
    else if (y < 0.00) {
        point = q2;
    }
    else {
        point = "Eixo X";
    }
    return point;
}

int main() {
    const double x{ getValue() };
    const double y{ getValue() };

    std::string point{};
    if (x == 0.0 && y == 0.0) {
        point = "Origem";
    }
    else if (x > 0.0) {
        point = getQ(y, "Q1", "Q4");
    }
    else if (x < 0.0) {
        point = getQ(y, "Q2", "Q3");
    }
    else {
        point = "Eixo Y";
    }
    std::cout << point << '\n';
    return 0;
}