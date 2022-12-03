#include <iostream>
#include <iomanip>

int main() {
    double salary{};
    std::cin >> salary;

    int percentage{};
    if(salary >= 0.00 && salary <= 400.00) {
        percentage = 15;
    }
    else if (salary <= 800.00) {
        percentage = 12;
    }
    else if (salary <= 1200.00) {
        percentage = 10;
    }
    else if (salary <= 2000.000) {
        percentage = 7;
    }
    else {
        percentage = 4;
    }
    double extra_money{ salary * (percentage / 100.00) };

    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Novo salario: " << (salary + extra_money);
    std::cout << "\nReajuste ganho: " << extra_money;
    std::cout << "\nEm percentual: " << percentage << " %\n";
    return 0;
}