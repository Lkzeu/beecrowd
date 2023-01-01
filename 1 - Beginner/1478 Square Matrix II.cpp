#include <iostream>
#include <iomanip>

int main()
{
    size_t size{};
    std::cin >> size;
    while(size != 0)
    {
        int matrix[size][size]{};
        // fills the matrix
        for(size_t row = 0; row < size; ++row)
        {
            auto number{ row + 1 };
            bool reached_one{ false };
            for(size_t col = 0; col < size; ++col)
            {
                if(number == 1) {
                    reached_one = true;
                }
                matrix[ row ][ col ] = number;
                number += (!reached_one ? -1 : 1);
            }
        }

        // prints the matrix to the console
        for(size_t row = 0; row < size; ++row)
        {
            for(size_t col = 0; col < size; ++col)
            {
                std::cout << std::setw(3) << matrix[row][col] << (col != size - 1? ' ' : '\n');
            }
        }
        std::cout << '\n';
        std::cin  >> size;
    }
    return 0;
}