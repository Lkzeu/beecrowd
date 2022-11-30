/* Two cars (X and Y) leave in the same direction. The car X leaves with a constant speed of 60 km/h and 
 * the car Y leaves with a constant speed of 90 km / h.
 * In one hour (60 minutes) the car Y can get a distance of 30 kilometers from the X car, in other words, 
 * it can get away one kilometer for each 2 minutes.  <- answer here
 * Read the distance (in km) and calculate how long it takes (in minutes) 
 * for the car Y to take this distance in relation to the other car.
 */

#include <iostream>

int main() {
    int km{ };
    std::cin >> km;
    std::cout << km * 2 << " minutos\n";
    return 0;
}