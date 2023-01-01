#include <iostream>
#include <iomanip>

int get_num_of_digits(int number) {
    int counter{ 0 };
    while(number != 0) {
        number /= 10;
        ++counter;
    }
    return counter;
}

int main()
{
    size_t size{};
    std::cin >> size;
    while (size != 0)
    {
        int matrix[size][size]{};
        int width{ 0 };
        int first_number_in_rows{ 1 };
        // fills the matrix
        for (auto row = 0; row < size; ++row)
        {
            int numbers{ first_number_in_rows };
            for (auto col = 0; col < size; ++col)
            {
                matrix[row][col]   = numbers;
                numbers           *= 2;
            }
            first_number_in_rows  *= 2;
            int tmp_width          = get_num_of_digits(matrix[row][size - 1]); 
            width                  = (tmp_width > width ? tmp_width : width);
            
        }

        // prints the matrix to the console
        for (size_t row = 0; row < size; ++row)
        {
            for (size_t col = 0; col < size; ++col)
            {
                std::cout << std::setw(width) << matrix[row][col] << (col != size - 1? ' ' : '\n');
            }
        }
        std::cout << '\n';
        std::cin  >> size;
    }
    return 0;
}