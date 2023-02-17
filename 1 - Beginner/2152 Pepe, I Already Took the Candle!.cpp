#include <iostream>

std::string get_formated_time(int time)
{
    std::string st = std::to_string(time);
    return (time < 10 ? "0" + st : st);
}

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    for (int test{ 0 }; test < test_cases; test++)
    {
        int hour{};
        int min{};
        bool door_opened{};
        std::cin >> hour >> min >> door_opened;
        
        std::string readable_time { 
            get_formated_time(hour) + ":" + get_formated_time(min) };
        
        std::cout << readable_time << " - A porta " 
                  << (door_opened ? "abriu!\n" : "fechou!\n");
    }

    return 0;
}