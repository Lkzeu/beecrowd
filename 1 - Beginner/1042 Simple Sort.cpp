#include <iostream>

void sort(int numbers[], int iterations = 3) {
    for (int i = 0; i < iterations; ++i) {
        for(int j = 0; j < (iterations - i - 1); ++j) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

int getValue() {
    int x{};
    std::cin >> x;
    return x;
}
 
int main() {
    int a{ getValue() };
    int b{ getValue() };
    int c{ getValue() };
    int numbers[3] {a, b, c};

    sort(numbers);
    for (int i = 0; i < 3; i++) {
        std::cout << numbers[i] << '\n';
    }
    std::cout << '\n' << a << '\n' << b << '\n' << c << '\n';
    return 0;
}