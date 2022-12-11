#include <iostream>
#include <algorithm> // for std::swap

int main() {
    int x{}, y{}, rest{};
    std::cin >> x >> y;

    if(x > y) {
        std::swap(x, y);
    }

    for(int i = x + 1 ; i < y; ++i) {
        rest = i % 5;
        if (rest == 2 || rest == 3) {
            std::cout << i << '\n';
        }
    }
    
    return 0;
}