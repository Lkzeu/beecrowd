#include <iostream>
#include <iomanip>

int main() {
    int test_cases{};
    std::cin >> test_cases;
    
    double a{}, b{}, c{}, average{};
    std::cout << std::setprecision(1) << std::fixed;
    for (int i{0}; i < test_cases; ++i) {
        std::cin >> a >> b >> c;
        average = ( (a * 2) + (b * 3) + (c * 5) ) / 10.00;
        std::cout << average << '\n';
    }

    return 0;
}