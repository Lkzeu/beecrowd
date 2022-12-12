#include <iostream>

int main() {
    auto final_number{ 1 };
    while(final_number != 0) {
        std::cin >> final_number;
        for (auto i = 1; i <= final_number; ++i) {
            std::cout << i << (i == final_number ? '\n' : ' ');
        }
    }
    return 0;
}