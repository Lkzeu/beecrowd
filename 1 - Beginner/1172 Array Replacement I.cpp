#include <iostream>

int main() {
    constexpr int size{ 10 };
    int x[size];

    for(int i = 0; i < size; ++i) { 
        int tmp_number{};
        std::cin >> tmp_number;
        x[i] = (tmp_number > 0 ? tmp_number : 1);
        //could put here: std::cout << "X[" << i << "] = " << x[i] << '\n';
    }

    for(int i = 0; i < size; ++i) {
        std::cout << "X[" << i << "] = " << x[i] << '\n';
    }
}