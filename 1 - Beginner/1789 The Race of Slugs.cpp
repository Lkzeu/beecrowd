#include <iostream>

int get_level(int speed) {
    if (speed < 10) {
        return 1;
    }
    if (speed < 20) {
        return 2;
    }
    return 3;
}

int main()
{
    int slugs{};

    while(std::cin >> slugs) 
    {
        int max_speed = 0;
        for (int i = 0; i < slugs; ++i)
        {
            int speed{};
            std::cin >> speed;
            if (speed > max_speed) 
            {
                max_speed = speed;
            }
        }
        std::cout << get_level(max_speed) << '\n';
    }
    return 0;
}