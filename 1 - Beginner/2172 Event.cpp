#include <iostream>
#include <cstdint>

int main()
{
    uint32_t old_xp{};
    int16_t  times_to_increase{};

    while (std::cin >> times_to_increase >> old_xp && 
         (old_xp || times_to_increase))
    {
        int64_t new_xp{ times_to_increase * old_xp };
        std::cout << new_xp << '\n';
    }

    return 0;
}