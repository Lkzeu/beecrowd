#include <iostream>
#include <numeric>

int main()
{
    int socket[4];
    for (int i = 0; i < 4; ++i)
    {
        std::cin >> socket[i];
    }

    constexpr int used_to_connect_strip{ 3 };
    const int sockets_available{ std::accumulate(std::begin(socket), std::end(socket), 0) };
    std::cout << sockets_available - used_to_connect_strip << '\n';

    return 0;
}