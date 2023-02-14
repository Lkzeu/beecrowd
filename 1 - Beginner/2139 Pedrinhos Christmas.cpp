#include <iostream>
#include <map>

enum Months {
    january = 1, february, march,    april,
    may,         june,     july,     august,
    september,   october,  november, december,
};

int main()
{
    std::map<Months, int> data = {
        {january, 31}, {february, 29}, {march,     31},
        {april,   30}, {may,      31}, {june,      30},
        {july,    31}, {august,   31}, {september, 30},
        {october, 31}, {november, 30}, {december,  31} 
    };

    int  month{};
    int  today{};
    while (std::cin >> month >> today)
    {
        int days_passed{ 0 };
        for (const auto& [key, days] : data)
        {
            if (key == month) { break; }
            days_passed += days;
        }

        int days_to_christmas = 360 - days_passed - today;
        if (days_to_christmas < 0)
        {
            std::cout << "Ja passou!\n"; 
            continue;
        }

        switch (days_to_christmas)
        {
          case 0:
            std::cout << "E natal!\n";
            break;
          case 1:
            std::cout << "E vespera de natal!\n";
            break;
          default:
            std::cout << "Faltam " << days_to_christmas
                      << " dias para o natal!\n";
            break;
        }
    }
    return 0;
}