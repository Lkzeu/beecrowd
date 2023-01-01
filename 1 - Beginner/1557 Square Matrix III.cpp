#include <iostream>
#include <iomanip>

int get_num_of_digits(int number) {
    int num_of_digits{ 1 };
    while ((number /= 10, number != 0)) {
        ++num_of_digits;
    }
    return num_of_digits;
}

int main()
{
    size_t size{};
    std::cin >> size;
    while (size != 0)
    {
        int matrix[size][size]{};
        int first_number_in_rows{ 1 };
        for (auto row = 0; row < size; ++row)
        {
            int numbers{ first_number_in_rows };
            for (auto col = 0; col < size; ++col)
            {
                matrix[row][col]  = numbers;
                numbers          *= 2;
            }
            first_number_in_rows *= 2;
        }

        int width{ get_num_of_digits(matrix[size - 1][size - 1]) }; // the last number has the max number of digits
        for (size_t row = 0; row < size; ++row)
        {
            for (size_t col = 0; col < size; ++col)
            {
                std::cout << std::setw(width) << matrix[row][col] << (col != size - 1? ' ' : '\n');
            }
        }
        std::cout << '\n';  // requested after each array!
        std::cin  >> size;
    }
    return 0;
}