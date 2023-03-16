#include <string>
#include <iostream>

int main()
{
    std::string all_letters{};
    char message[10'000 + 1]; // buffer to 10 ^ 4 letters and + 1 to the \0 it. (~9.76 Kb)
    while (std::cin >> all_letters)
    {
        int bulbs{};
        std::cin >> bulbs;
        int i = 0;
        for (; i < bulbs; i++)
        {
            int pos{};
            std::cin >> pos;
            // std::cout << all_letters.at(pos - 1); // without buffer
            message[i] = all_letters.at(pos - 1);
        }
        message[i] = '\0';
        std::cout << message << '\n';  // cout only once, faster than calling it letter by letter
    }
    return 0;
}