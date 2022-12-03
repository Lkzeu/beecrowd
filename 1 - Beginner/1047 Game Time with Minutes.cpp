#include <iostream>

int main() {
    int starting_time_hours, ending_time_hours;
    int starting_time_minutes, ending_time_minutes;
    std::cin >> starting_time_hours >> starting_time_minutes;
    std::cin >> ending_time_hours >> ending_time_minutes;

    starting_time_hours *= 60;
    ending_time_hours *= 60;

    if ((ending_time_hours < starting_time_hours) ||
           ((ending_time_hours == starting_time_hours) &&
            (ending_time_minutes <= starting_time_minutes))) {
        
        ending_time_hours += (24 * 60);
    }

    if (ending_time_minutes < starting_time_minutes) {
        ending_time_minutes += 60;
        ending_time_hours -= 60;
    } 

    int delta_time = (ending_time_hours + ending_time_minutes) - (starting_time_hours + starting_time_minutes);

    std::cout << "O JOGO DUROU " << (delta_time / 60) << " HORA(S)";
    std::cout << " E " << (delta_time % 60) << " MINUTO(S)\n"; 
    return 0;
}