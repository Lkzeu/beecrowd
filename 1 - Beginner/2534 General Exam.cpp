#include <iostream>
#include <algorithm>
#include <functional>

int main()
{
    constexpr int max_queries{ 100 };
    int num_citiziens{};
    int queries{};
    while (std::cin >> num_citiziens >> queries)
    {
        int citiziens[max_queries]{};
        for (int i = 0; i < num_citiziens; i++)
            std::cin >> citiziens[i];
        std::sort(citiziens, citiziens + num_citiziens, std::greater{});

        for (int i = 0; i < queries; i++)
        {
            int position{};
            std::cin >> position;
            std::cout << citiziens[position - 1] << '\n';
        }
    }
    return 0;
}

