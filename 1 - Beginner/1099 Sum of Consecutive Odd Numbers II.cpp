#include <iostream>

void sortit(int &x, int &y) {
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }
}

int main() {
    int test_cases{};
    std::cin >> test_cases;
    
    int x{}, y{};
    for(int test = 1; test <= test_cases; ++test) {
        std::cin >> x >> y;
        sortit(x, y);
        int sum{};
        for (int i = x + 1; i < y; ++i) {
            if ((i % 2) != 0) {
                sum += i;
            }
        }
        std::cout << sum << '\n';
    }
    
    return 0;
}