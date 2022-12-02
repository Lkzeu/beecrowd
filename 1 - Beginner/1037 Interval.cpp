#include <iostream>

double getValue() {
    double x{};
    std::cin >> x;
    return x;
}

int main() {
    const double value{ getValue() };

    if( value < 0.00 || value > 100.00) {
        std::cout << "Fora de intervalo\n";
        return 0;
    }
    
    std::string interval{};
    if(value <= 25.0) {
        interval = "[0,25]";
    } 
    else if (value <= 50.0) {
        interval = "(25,50]";
    }
    else if (value <= 75.0) {
        interval = "(50,75]";
    }
    else {
        interval = "(75,100]";
    }

    std::cout << "Intervalo " << interval << '\n';

    return 0;
}