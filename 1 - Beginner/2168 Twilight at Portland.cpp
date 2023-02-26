#include <iostream>
#include <cstddef>
#include <array>

int main()
{
    int has_camera[101][101]{};
    int rows_and_cols{};
    std::cin >> rows_and_cols;

    for (int i{ 0 }; i < rows_and_cols + 1; ++i) {
        for (int j{ 0 }; j < rows_and_cols + 1; ++j)
        {
            std::cin >> has_camera[i][j];
        }
    }

    for (int rows{ 0 }; rows < rows_and_cols; ++rows) {
        for (int cols = 0; cols < rows_and_cols; ++cols)
        {
            int counter = 0;
            for (int k = cols; k < cols + 2; ++k)
            {
                counter += has_camera[rows][k];
                counter += has_camera[rows + 1][k];
            }
            std::cout << (counter >= 2 ? 'S' : 'U');
        }
        std::cout << '\n';
    }
}