#include <iostream>
#include <array>

constexpr int max_size{ 100 };
using Matrix = std::array<std::array<int, max_size>, max_size>;

int count_adjacents(Matrix m, int row, int col,
                     int max_row, int max_col)
{
    if (m[row][col] == 1)
        return 9;

    int counter = 0;
    if (row - 1 >= 0)
        counter += m[row - 1][col];
    if (row + 1 < max_row)
        counter += m[row + 1][col];
    if (col - 1 >= 0)
        counter += m[row][col - 1];
    if (col + 1 < max_col)
        counter += m[row][col + 1];

    return counter;
}

int main()
{
    Matrix cheese_breads;
    int max_rows;
    int max_cols;
    while (std::cin >> max_rows >> max_cols)
    {
        for (int i = 0; i < max_rows; i++) {
            for (int j = 0; j < max_cols; j++)
            {
                std::cin >> cheese_breads[i][j];
            }
        }

        for (int i = 0; i < max_rows; i++) {
            for (int j = 0; j < max_cols; j++)
            {
                std::cout
                    << count_adjacents(cheese_breads, i, j, max_rows, max_cols);
            }
            std::cout << '\n';
        }
    }
    return 0;
} 
