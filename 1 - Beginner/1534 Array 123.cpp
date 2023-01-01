#include <iostream>

int main()
{
    size_t size{};
    while (std::cin >> size)
    {
        int matrix[size][size]{};
        // fills the matrix
        for (size_t row = 0; row < size; ++row)
        {
            for (size_t col = 0; col < size; ++col)
            {
                auto number{ 3 };
                if (row == col) {
                    number = 1;
                }
                if (col == (size - (row + 1))) {
                    number = 2;
                }
                matrix[row][col] = number;
            }
        }

        // prints the matrix to the console
        for (size_t row = 0; row < size; ++row)
        {
            for (size_t col = 0; col < size; ++col)
            {
                std::cout << matrix[row][col];
            }
            std::cout << '\n';
        }
    }
    return 0;
}