/* Little John wants to calculate and show the amount of spent fuel liters on a trip, 
 * using a car that does 12 Km/L. For this, he would like you to help him through a simple program.
 * To perform the calculation, you have to read spent time (in hours) and the same average speed (km/h). 
 * In this way, you can get distance and then, calculate how many liters would be needed. 
 * Show the value with three decimal places after the point.
 */

#include <iostream>

int getInteger() {
    int integer{};
    std::cin >> integer;
    return integer;
}

int main() {
    const int hours_spent{ getInteger() };
    const int average_speed_kmh{ getInteger() };
    
    constexpr int fuel_consumption_kml{ 12 };
    const int distance{ average_speed_kmh * hours_spent }; // dV = dist / time -> dist = dV * time
    const double fuel_needed_in_liters{ static_cast<double>(distance) / fuel_consumption_kml };

    std::cout.precision(3);
    std::cout << std::fixed << fuel_needed_in_liters << '\n';
    return 0;
}