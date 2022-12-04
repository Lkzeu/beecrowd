#include <iostream>

int main() {
    int N{};
    std::cin >> N;
    for(int i = 1; i <= 10'000; ++i) {
        if ((i % N) == 2) {
            std::cout << i << '\n';
        }
    }

    return 0;
}