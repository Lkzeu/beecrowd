#include <iostream>
#include <cmath>

int main()
{
    int frog_jump_height{};
    int number_of_pipes{};
    std::cin >> frog_jump_height >> number_of_pipes;

    int pipes[number_of_pipes] {};
    for (int i = 0; i < number_of_pipes; ++i)
    {
        std::cin >> pipes[i];
    }

    bool win{ true };
    for (int i = 0; i < number_of_pipes - 1; ++i)
    {
        int current{ pipes[i] };
        int next{ pipes[i + 1] };

        if (std::abs(current - next) > frog_jump_height)
        {
            win = false;
            break;
        }
    }

    std::cout << (win ? "YOU WIN" : "GAME OVER") << '\n';
    return 0;
}