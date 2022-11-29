/* Make a program that reads 3 integer values and present 
 * the greatest one followed by the message "eh o maior". 
 * Use the following formula:
 * maiorAB = (a+b+abs(a-b)) / 2 
*/

#include <iostream>

int abs(int number) {
    if (number < 0)
        return -number; // make it positive: -(-1) = 1
    return number;
}

int main() {
    int a{ }, b{ }, c{ };
    std::cin >> a >> b >> c;

    const int greatestAB = (a + b + abs(a - b)) / 2;
    int greatest = greatestAB;

    if (c > greatest)
        greatest = c;
    
    std::cout << greatest << " eh o maior\n";
    return 0;
}