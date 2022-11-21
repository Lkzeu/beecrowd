/* Read three values (variables A, B and C), which are the three student's grades.
 * Then, calculate the average, considering that grade A has weight 2, 
 * grade B has weight 3 and the grade C has weight 5. 
 * Consider that each grade can go from 0 to 10.0, always with one decimal place.
 */

#include <iostream>

double readGrade() {
    double grade{ 0.0 };
    std::cin >> grade;
    return grade; 
}

int main() {
    const double a{ readGrade() };
    const double b{ readGrade() };
    const double c{ readGrade() }; 

    constexpr double a_weight = 2.0;
    constexpr double b_weight = 3.0;
    constexpr double c_weight = 5.0;
    constexpr double weight_sums = a_weight + b_weight + c_weight;

    std::cout.precision(1);
    std::cout << std::fixed;

    const double w_average = ((a * a_weight) + (b * b_weight) + (c * c_weight)) / weight_sums;
    std::cout << "MEDIA = " << w_average << '\n';
    return 0;
}