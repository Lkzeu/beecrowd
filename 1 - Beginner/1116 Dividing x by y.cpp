#include <iostream>
#include <iomanip>

int main() {
    int test_cases{};
    std::cin >> test_cases;
    
    int x{}, y{};
    std::cout << std::setprecision(1) << std::fixed;
    for (int i = 0; i < test_cases; ++i) {
        std::cin >> x >> y;
        if( y == 0 ) {
            std::cout << "divisao impossivel\n";
            continue;
        }
        std::cout << static_cast<double>(x) / y << '\n';
    }

    return 0;
}