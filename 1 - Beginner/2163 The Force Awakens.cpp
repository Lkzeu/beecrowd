#include <iostream>
#include <cstdio>
#include <utility>

bool verify(const int* row, int col, int should_be = 7)
{
    return (row[col] == should_be &&
            row[col - 1] == 7  &&
            row[col + 1] == 7);
}

int main()
{
    int max_col { 0 };
    int max_row { 0 };
    int matrix[1000][1000]{};
    std::cin >> max_row >> max_col;
    for (int row{ 0 }; row < max_row; row++) {
        for (int col{ 0 }; col < max_col; col++)
        {
            scanf(" %d", &matrix[row][col]);
        }
    }

    std::pair lightsaber_coordinate{0, 0};
    for (int row{ 1 }; row < max_row - 1; row++) {
        for (int col{ 1 }; col < max_col - 1; col++)
        {
            if (matrix[row][col] == 42)
            {
                if(verify(matrix[row], col, 42) && 
                   verify(matrix[row - 1], col) &&
                   verify(matrix[row + 1], col))
                {
                    lightsaber_coordinate.first  = row + 1;
                    lightsaber_coordinate.second = col + 1;
                    break;
                }
            }
        }
    }

    std::cout << lightsaber_coordinate.first << " "
              << lightsaber_coordinate.second << '\n';

    return 0;
}