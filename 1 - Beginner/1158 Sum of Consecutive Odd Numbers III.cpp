#include <iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    for(int i = 0; i < test_cases; ++i) {
        int x{}, y{};
        std::cin >> x >> y;
        
        auto consecutives{ 0 };
        auto sum{ 0 };
        while(consecutives < y) {
            if(x % 2 != 0) {
                sum += x;
                ++consecutives;
            }
            ++x;
        }

        std::cout << sum << '\n';
    }
    return 0;
}