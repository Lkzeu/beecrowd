#include <iostream>
#include <iomanip>

int main()
{
    size_t size{};
    std::cin >> size;
    while (size != 0)
    {
        int matrix[size][size]{};
        // fills the matrix
        for (size_t row = 0; row < size; ++row)
        {
            int number{ 1 };
            for (size_t col = 0; col < size; ++col)
            {
                if (matrix[row][col] != 0) {
                    break;
                }

                if (row + 1 == number || size - row == number) {
                    matrix[row][col] = number;
                    continue;
                }

                matrix[ row ][ col ]            = number;
                matrix[ row ][ size - number ]  = number;
                ++number;
            }
        }

        // prints the matrix to the console
        for (size_t row = 0; row < size; ++row)
        {
            for (size_t col = 0; col < size; ++col)
            {
                std::cout << std::setw(3) << matrix[row][col] << (col != size - 1? ' ' : '\n');
            }
        }
        std::cout << '\n';
        std::cin  >> size;
    }
    return 0;
}