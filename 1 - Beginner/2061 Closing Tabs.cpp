#include <iostream>

int main()
{
    int tabs{};
    int actions{};
    std::cin >> tabs >> actions;
    
    for (int i = 0; i < actions; ++i)
    {
        std::string action{};
        std::cin >> action;
        if (action == "fechou")
        {
            ++tabs;
        } else {
            --tabs;
        }
    }
    std::cout << tabs << '\n';
    return 0;
}