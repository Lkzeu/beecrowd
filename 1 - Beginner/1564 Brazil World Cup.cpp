#include <iostream>

int main ()
{
    int complaints{};
    while (std::cin >> complaints)
    {
        std::string cup{ complaints ? "duas" : "copa"};
        std::cout << "vai ter " << cup << "!\n";
    }
}