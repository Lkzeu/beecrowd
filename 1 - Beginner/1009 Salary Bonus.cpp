#include <iostream>
#include <string>

double getValue() {
    double x{};
    std::cin >> x;
    return x;
}

int main() {
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    
    double salary{ getValue() };
    double total_sold{ getValue() };

    std::cout.precision(2);
    std::cout << std::fixed;
    std::cout << "TOTAL = R$ " << salary + (total_sold * 0.15) << '\n';
    return 0;
}