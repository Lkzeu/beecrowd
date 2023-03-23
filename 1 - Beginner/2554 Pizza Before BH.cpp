#include <iostream>
#include <string>

int main()
{
    int number_people{};
    int number_considered_dates{};
    while (std::cin >> number_people >> number_considered_dates)
    {
        std::string meet_date{};
        bool everyone_could_go{ false };
        for (int date = 0; date < number_considered_dates; date++)
        {
            std::string considered_date{};
            int people_could_go_in_date{ 0 };
            std::cin >> considered_date;

            for (int i = 0; i < number_people; i++)
            {
                int could_go;
                std::cin >> could_go;
                people_could_go_in_date += could_go; 
            }
            if (people_could_go_in_date == number_people && 
                !everyone_could_go) // if already had a date, doesn't override it
            {
                everyone_could_go = true;
                meet_date = considered_date;
            }
        }
        if (everyone_could_go)
        {
            std::cout << meet_date << '\n';
            continue;
        }
        std::cout << "Pizza antes de FdI\n";
    }     
    return 0;
}
