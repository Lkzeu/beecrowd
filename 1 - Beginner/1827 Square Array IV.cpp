#include <iostream>

int main()
{
    size_t size{};
    while (std::cin >> size)
    {
        int matrix[size][size]{};
        int start_one = size / 3;
        for (size_t row = 0; row < size; ++row)
        {
            for (size_t col = 0; col < size; ++col)
            {
                auto number{ 0 };
                if (row == col) {
                    number = 2;
                }
                if (col == (size - (row + 1))) {
                    number = 3;
                }
                if ((row >= start_one) && (row <= (size - start_one - 1)) &&
                    (col >= start_one) && (col <= (size - start_one - 1))) 
                {
                    number = 1;
                }

                if (row + row == size - 1 && col + col == size - 1) {
                    number = 4;
                }
                matrix[row][col] = number;
            }
        }

        for (size_t row = 0; row < size; ++row)
        {
            for (size_t col = 0; col < size; ++col)
            {
                std::cout << matrix[row][col];
            }
            std::cout << '\n';
        }
        std::cout << '\n';
    }
    return 0;
}