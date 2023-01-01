#include <iostream>

int main()
{
    int times_to_spoke{};
    std::cin >> times_to_spoke;

    for (int i = 1; i <= times_to_spoke; ++i) {
        std::cout << "Ho" << (i == times_to_spoke ? "!\n" : " ");
    }
    return 0;
}