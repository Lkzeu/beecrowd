/* Read two integer values. After this, calculate the product between them
 * and store the result in a variable named PROD. 
 * Print the result like the example below.
 * Do not forget to print the end of line after the result, 
 * otherwise you will receive “Presentation Error”. */

#include <iostream>

int readNumber() {
    int x{ };
    std::cin >> x;
    return x;
}

int main() {
    int a{ readNumber() };
    int b{ readNumber() };

    std::cout << "PROD = " << a * b << '\n';
    return 0;
}