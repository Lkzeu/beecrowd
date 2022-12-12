#include <iostream>

int main() {
    int a{}, n{}, sum{};
    std::cin >> a >> n;
    while (n <= 0) {
        std::cin >> n;
    }

    for (int i = 0; i < n; ++i)
    {
        sum += a + i;
    }
    std::cout << sum << '\n';
    

    return 0;
}