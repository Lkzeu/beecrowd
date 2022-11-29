/* Make a program that reads 3 integer values and present 
 * the greatest one followed by the message "eh o maior". 
 * Use the following formula:
 * maiorAB = (a+b+abs(a-b)) / 2 
*/

#include <iostream>

int abs(int a, int b) {
    const int result = a - b;
    if (result < 0)
        return -result; // make it positive: -(-1) = 1
    return result;
}

int main() {
    int a{ }, b{ }, c{ };
    std::cin >> a >> b >> c;

    const int greatestAB = (a + b + abs(a, b)) / 2;
    int greatest = greatestAB;

    if (c > greatest)
        greatest = c;
    
    std::cout << greatest << " eh o maior\n";
    return 0;
}