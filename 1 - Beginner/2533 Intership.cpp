#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::fixed << std::setprecision(4);
    int subjects{};
    while (std::cin >> subjects)
    {
        int numerator{ 0 };
        int denominator{ 0 };
        for (int i = 0; i < subjects; i++)
        {
            int grade;
            int workload;
            std::cin >> grade >> workload;
            numerator += grade * workload;
            denominator += workload;
        }
        double api{ numerator / (denominator * 100.00) };
        std::cout << api << '\n';
    }
    return 0;
}
