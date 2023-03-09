#include <iostream>
#include <algorithm>

std::string triangleType(int a, int b, int c)
{
    if (a == b && a == c)
        return "Equilatero\n";
    else if (a == b || a == c || b == c)
        return "Isoceles\n";
    return "Escaleno\n";
}

bool isRectangle(int a, int b, int c)
{
    if (b > a)
        std::swap(a, b);
    if (c > a)
        std::swap(a, c);
    return (a * a) == (b * b) + (c * c);
}

int main()
{
    int a{};
    int b{};
    int c{};
    std::cin >> a >> b >> c;
    const int half { (a + b + c) / 2};
    // if sort abc we could check only the bigger side with the sum of the small ones
    if (!((a + b > half) && (a < half) && (b < half)))
    {
        std::cout << "Invalido\n";
        return 0;
    }
    
    std::cout << "Valido-" << triangleType(a, b, c);
    std::cout << "Retangulo: " << (isRectangle(a, b, c) ? "S\n": "N\n");;
    return 0;
}