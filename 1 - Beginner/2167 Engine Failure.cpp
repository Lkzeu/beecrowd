#include <iostream>

int main()
{
    int qty_measures{};
    std::cin >> qty_measures;

    int previous_rpm{ 0 };
    int failure_index{ 0 };
    for (int measure{ 0 }; measure < qty_measures; measure++)
    {
        int current_rpm{};
        std::cin >> current_rpm;

        if (current_rpm < previous_rpm)
        {
            failure_index = measure + 1;
            break;
        }
        previous_rpm = current_rpm;
    }

    std::cout << failure_index << '\n';
}