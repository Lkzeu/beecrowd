#include <iostream>
#include <algorithm> // for std::swap

int main() {
    int x{}, y{}, sum{};
    std::cin >> x >> y;

    if(x > y) {
        std::swap(x, y);
    }

    for( ; x <= y; ++x) {
        if (x % 13 != 0) {
            sum += x;
        }
    }
    std::cout << sum << '\n';
    return 0;
}