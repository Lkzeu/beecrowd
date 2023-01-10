#include <iostream>

bool isTriangle(int a, int b, int c)
{   
    return (a + b > c && a + c > b && c + b > a);
}

int main()
{
    int a{}, b{}, c{}, d{};
    std::cin >> a >> b >> c >> d;

    if(isTriangle(a, b, c) || isTriangle(a, b, d) ||
       isTriangle(b, c, d) || isTriangle(a, c, d))
    {
        std::cout << "S\n";
    } else {
        std::cout << "N\n";
    }
    return 0;
}