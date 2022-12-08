#include <iostream>

int main() {
    int x{}, y{};
    std::cin >> x >> y;
    std::string quadrant{};
    while(x != 0 && y != 0) {
        if (x > 0) {
            quadrant = (y > 0) ? "primeiro" : "quarto";
        }
        else {
            quadrant = (y > 0) ? "segundo"  : "terceiro";
        }
        std::cout << quadrant << '\n';
        std::cin >> x >> y;
    }

    return 0;
}