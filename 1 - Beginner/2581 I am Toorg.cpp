#include <iostream>
#include <string>

int main()
{
    int test_cases;
    std::cin >> test_cases;

    constexpr char answer[]{ "I am Toorg!" };
    for (int i = 0; i < test_cases; i++)
    {
        std::string question;
        std::getline(std::cin >> std::ws, question);
        std::cout << answer << '\n';
    }
    return 0;
}
