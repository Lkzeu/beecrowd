#include <iostream>
 
int main()
{
    int number_on_paper{};
    while( std::cin >> number_on_paper)
    {
        int password { number_on_paper - 1 };
        std::cout << password << '\n';
    }
    return 0;
}