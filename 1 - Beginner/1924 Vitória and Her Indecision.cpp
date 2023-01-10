#include <iostream>
#include <string>

int main()
{
    int number_of_courses_considered{};
    std::cin >> number_of_courses_considered;

    for (int i = 0; i < number_of_courses_considered; ++i)
    {
        std::string considered_course{};
        std::getline(std::cin >> std::ws, considered_course);
    }
    
    const std::string best_choice{ "Ciencia da Computacao" };
    std::cout << best_choice << '\n';
    return 0;
}