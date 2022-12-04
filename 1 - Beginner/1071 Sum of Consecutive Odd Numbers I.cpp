#include <iostream>

void sortit(int &x, int &y) {
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }
}

int main() {
    int x{}, y{};
    std::cin >> x >> y;
    
    sortit(x, y);
    int sum{}; // got wa a lot until realize a I didn't initialized this shit!
    for (int i = x + 1; i < y; ++i) {
        if ((i % 2) != 0) {
            sum += i;
        }
    }
    std::cout << sum << '\n';
    return 0;
}