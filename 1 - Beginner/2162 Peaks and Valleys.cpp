#include <iostream>

int main()
{
    int landscapes{};
    int previous{};
    int current{};
    std::cin >> landscapes >> previous >> current;

    bool pattern{ current != previous };
    bool p_peak { current  > previous };

    previous = current;
    for (int i{ 0 }; i < landscapes - 2 && pattern; i++)
    {
        std::cin >> current;
        bool c_peak{ current > previous };
        
        if ((current == previous) || (c_peak == p_peak))
        {
            pattern = false;
            break;
        }
        previous = current;
        p_peak   = c_peak;
    }

    std::cout << pattern << '\n';
    return 0;
}