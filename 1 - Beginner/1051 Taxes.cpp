#include <iostream>
#include <iomanip>

double calculateTaxes(double &salary, double value_tax_free, int tax_percentage) {
    double taxes{};
    if (salary > value_tax_free) {
        double base { salary - value_tax_free };
        taxes = (base * (tax_percentage / 100.00));
        salary -= base;
    }
    
    return taxes;
}
int main() {
    double salary{};
    std::cin >> salary;

    double taxes{};
    taxes += calculateTaxes(salary, 4'500.00, 28);
    taxes += calculateTaxes(salary, 3'000.00, 18);
    taxes += calculateTaxes(salary, 2'000.00, 8);
    
    if (!taxes) {
        std::cout << "Isento\n";
    }
    else {
        std::cout << std::setprecision(2) << std::fixed;
        std::cout << "R$ " << taxes << '\n';
    }
    return 0;
}