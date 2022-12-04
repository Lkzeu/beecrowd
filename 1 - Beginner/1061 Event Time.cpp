#include <iostream>

int convertToSec(int day, int hour, int min, int sec) {
    day *=  (24 * 60 * 60);
    hour *= (60 * 60);
    min *= 60;
    return (day + hour + min + sec);
}

int main() {
    
    std::string garbage;
    int start_day, start_hour, start_min, start_sec;
    std::cin >> garbage >> start_day;
    std::cin >> start_hour >> garbage >> start_min >> garbage >> start_sec;
    int starting_time_sec = convertToSec(start_day, start_hour, start_min, start_sec);
    
    std::cin >> garbage >> start_day;
    std::cin >> start_hour >> garbage >> start_min >> garbage >> start_sec;
    int ending_time_sec = convertToSec(start_day, start_hour, start_min, start_sec);

    int delta_time = ending_time_sec - starting_time_sec;

    int days, hour, min, sec;
    days = delta_time / (24 * 60 * 60);
    hour = (delta_time %= (24 * 60 * 60), delta_time / (60 * 60));
    min = (delta_time %= (60 * 60), delta_time / 60);
    sec = delta_time % 60;    

    std::cout << days << " dia(s)\n" << hour << " hora(s)\n" << min << " minuto(s)\n" << sec << " segundo(s)\n";
    return 0;
}