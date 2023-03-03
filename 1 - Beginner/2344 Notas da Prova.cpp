#include <iostream>

enum Conceito
{
    E = 0,
    D = 1,
    C = 36,
    B = 61,
    A = 86,
};

char getConceito(int nota)
{
    if (nota == E)
        return 'E';
    
    if (nota < C)
        return 'D';
    if (nota < B)
        return 'C';
    if (nota < A)
        return 'B';
    return 'A';
}

int main()
{
    int nota{};
    std::cin >> nota;
    std::cout << getConceito(nota) << '\n';
}