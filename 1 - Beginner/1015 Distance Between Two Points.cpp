/* Read the four values corresponding to the x and y axes of two points
 * in the plane, p1 (x1, y1) and p2 (x2, y2)
 * and calculate the distance between them, 
 * showing four decimal places after the comma
 */

#include <iostream>
#include <cmath>

double pointDifference(const double x, const double y) {
    return pow(y - x, 2);
}

int main() {
    double x1{ }, y1{ };
    std::cin >> x1 >> y1; 

    double x2{ }, y2{ };
    std::cin >> x2 >> y2;

    const double x_diff{ pointDifference(x1, x2) };
    const double y_diff{ pointDifference(y1, y2) };

    std::cout.precision(4);
    std::cout << std::fixed << sqrt(x_diff + y_diff) << '\n';

    return 0;
}