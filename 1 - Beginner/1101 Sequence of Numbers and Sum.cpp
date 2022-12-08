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
    while( (std::cin >> x >> y, (x > 0) && (y > 0)) ) {
        sortit(x, y);
        int sum{};
        for (int i = x; i <= y; ++i) {
            std::cout << i << " ";
            sum += i;
        }
        std::cout << "Sum="<< sum << '\n';
    }
    return 0;
}