#include <iostream>
#include <cmath>

int main()
{
    int a{};
    int b{};
    
    std::cin >> a >> b;
    int quocient{};
    int reminder{};
    for (int r = 0; r < std::abs(b); ++r)
    {
        int q = (a - r) / b;
        if (a == b * q + r)
        {
            quocient = q;
            reminder = r;
            break;
        }
    }
    std::cout << quocient << " " << reminder << '\n';
    return 0;
}