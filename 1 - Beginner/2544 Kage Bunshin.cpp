#include <iostream>
#include <cmath>

int main()
{
    int copies{};
    while(std::cin >> copies)
    {
        int times_kage_bunshin = std::log2(copies);
        std::cout << times_kage_bunshin << '\n';
    }
    return 0;
}
