/* Calculate a car's average consumption being provided 
 * the total distance traveled (in Km) 
 * and the spent fuel total (in liters).
 */

#include <iostream>

double fuelSpent() {
    double fuel{ };
    std::cin >> fuel;
    return fuel;
}

int kmTraveled() {
    return static_cast<int>(fuelSpent());
} 

int main() {
    const int km{ kmTraveled() };
    const double fuel{ fuelSpent() };

    const double average_consumption = km / fuel;
    std::cout.precision(3);
    std::cout << std::fixed << average_consumption << " km/l\n";     

    return 0;
}