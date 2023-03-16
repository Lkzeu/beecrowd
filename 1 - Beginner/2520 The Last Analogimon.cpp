#include <iostream>

int getDistanceBetween(std::pair<int, int> a, std::pair<int, int> b)
{
    return (std::abs(a.first - b.first) + std::abs(a.second - b.second));
}

int main()
{
    int max_row{};
    int max_col{};
    while (std::cin >> max_row >> max_col)
    {
        std::pair analogimon_coordinate{0, 0};
        std::pair my_coordinate{0, 0};
        for (int row = 0; row < max_row; row++)
        {
            for (int col = 0; col < max_col; col++)
            {
                int temp{};
                std::cin >> temp;

                if (temp == 2) { analogimon_coordinate = std::make_pair(row, col); }
                if (temp == 1) { my_coordinate = {row, col}; } // the same ^
            }
        }
        std::cout << getDistanceBetween(my_coordinate,
                        analogimon_coordinate) << '\n';
    }
    return 0;
}
