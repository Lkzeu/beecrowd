/* Read 2 variables, named A and B and make the sum of these two variables,
 * assigning its result to the variable X. Print X as shown below. 
 * Print endline after the result otherwise you will get “Presentation Error”.
 */

#include <iostream>

int main(void) {
    int x{ };
    std::cin >> x;

    int y{ };
    std::cin >> y;

    std::cout << "X = " << x + y << "\n";
    return 0;
}