/* Read 4 integer values A, B, C and D. Then if B is greater than C and D is greater than A 
 * and if the sum of C and D is greater than the sum of A and B and if C and D were positives values 
 * and if A is even, write the message “Valores aceitos” (Accepted values). 
 * Otherwise, write the message “Valores nao aceitos” (Values not accepted).
 */

#include <iostream>

bool isGreater(const int x, const int y) {
    return x > y;
}
bool isPositive(const int x) {
    return x >= 0;
}

bool isEven(const int x) {
    return (x % 2) == 0;
}

int getValue() {
    int x{};
    std::cin >> x;
    return x;
}
int main() {
    const int a{ getValue() };
    const int b{ getValue() };
    const int c{ getValue() };
    const int d{ getValue() };

    if (isGreater(b, c) && isGreater(d, a) && isGreater(c + d, a + b) 
            && isPositive(c) && isPositive(d) && isEven(a)) {
        
        std::cout << "Valores aceitos\n";   
    }
    else {
        std::cout << "Valores nao aceitos\n";
    }

    return 0;
}