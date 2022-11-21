/* Read two floating points' values of double precision A and B,
 * corresponding to two student's grades. After this, 
 * calculate the student's average, considering that grade A has weight 3.5
 * and B has weight 7.5. Each grade can be from zero to ten, 
 * always with one digit after the decimal point. 
 * Don’t forget to print the end of line after the result,
 * otherwise you will receive “Presentation Error”. 
 * Don’t forget the space before and after the equal sign. */

#include <iostream>

double readGrade() {
    double grade{ 0.0 };
    std::cin >> grade;
    return grade; 
}

int main() {
    double a{ readGrade() };
    double b{ readGrade() };

    const double a_weight = 3.5;
    const double b_weight = 7.5;

    std::cout.precision(5);
    std::cout << std::fixed;

    double w_average = ((a * a_weight) + (b * b_weight)) / (a_weight + b_weight);
    std::cout << "MEDIA = " << w_average << '\n';
    return 0;
}