/* Read two integer values, in this case, the variables A and B.
 * After this, calculate the sum between them and assign it to the variable SOMA. 
 * Write the value of this variable. */


#include <iostream>

int main() {
    int a{ };
    std::cin >> a;

    int b{ };
    std::cin >> b;

    // the variable SUM (SOMA) is quite unnecessary here. 
    std::cout << "SOMA = " << a + b << '\n';
    return 0;
}