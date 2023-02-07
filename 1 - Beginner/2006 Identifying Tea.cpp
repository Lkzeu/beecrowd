#include <iostream>

enum Tea
{
    white_tea = 1,
    green_tea,
    black_tea,
    herbal_tea,
};

int main()
{
    int temp{};
    std::cin >> temp;
    const Tea tea_type{ static_cast<Tea>(temp) };

    int counter{ 0 };
    for (int contestant{ 1 }; contestant <= 5; ++contestant)
    {
        std::cin >> temp;
        if (temp == tea_type) {
            ++counter;
        }
    }
    std::cout << counter << '\n';
    return 0;
}