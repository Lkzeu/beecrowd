#include <iostream>

void sort(double numbers[], int iterations = 3) {
    for (int i = 0; i < iterations; ++i) {
        for(int j = 0; j < (iterations - i - 1); ++j) {
            if (numbers[j] < numbers[j + 1]) {
                double temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;
    double sides[] {a, b, c};
    
    sort(sides);
    a = sides[0];
    b = sides[1];
    c = sides[2];

    double sumBC{ (b * b) + (c * c)};
    double sumA {a * a};

    if (a >= (b + c)) {
        std::cout << "NAO FORMA TRIANGULO\n";
        return 0;
    }

    if(sumA == sumBC) {
        std::cout << "TRIANGULO RETANGULO\n";
    }
    else if (sumA > sumBC) {
        std::cout << "TRIANGULO OBTUSANGULO\n";
    }
    else {
        std::cout << "TRIANGULO ACUTANGULO\n";
    }

    if (a == b && a == c) {
        std::cout << "TRIANGULO EQUILATERO\n";
    }
    else if ((a == b) || (a == c) || (b == c)) {
        std::cout << "TRIANGULO ISOSCELES\n";
    }

    return 0;
}