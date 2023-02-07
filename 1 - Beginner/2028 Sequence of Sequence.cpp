#include <iostream>

int main()
{
    int number{};
    int case_number{ 1 };
    while (std::cin >> number)
    {
        const int quantity{ (number * (number + 1) / 2) + 1 };
        int* sequence = new int[quantity]{ 0 };
        int last_index{ 1 };
        for (int i = 1; i <= number; ++i)
        {
            for (int j = 0; j < i; ++j)
            {
                sequence[last_index++] = i;
            }
        }

        std::cout << "Caso " << case_number++ << ": " << quantity 
            << (quantity == 1 ? " numero\n" : " numeros\n");
        for (int i = 0; i < quantity; ++i)
            std::cout << sequence[i] << (i == (quantity - 1) ? '\n' : ' ');
        std::cout << '\n';
        delete[] sequence;
    }
    return 0;
}