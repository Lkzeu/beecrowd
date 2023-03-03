#include <algorithm>
#include <iostream>
#include <array>

inline bool isPossible(const std::array<int, 3>& arr)
{
    if ( arr[1] == arr[2] || arr[1] == arr[0] ||
         arr[2] == arr[1] + arr[0]) {
        return true;
    }
    return false;
}

int main()
{
    std::array<int, 3> credits{};
    for (int i = 0; i < 3; ++i)
        std::cin >> credits[i];

    std::sort(credits.begin(), credits.end());
    std::cout << (isPossible(credits) ? "S\n" : "N\n");
    return 0;
}