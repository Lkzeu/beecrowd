#include <iostream>
#include <limits>

using uint64 = unsigned long long;

int main()
{
    uint64 stop_at{ std::numeric_limits<uint64>::max() };
    uint64 amount_of_ducks{ 0 };
    
    while (std::cin >> amount_of_ducks &&  
            amount_of_ducks != stop_at)  // -1 wraps around to max
    {
        uint64 returned_ducks = 0;
        if (amount_of_ducks)
            returned_ducks = amount_of_ducks - 1;
        std::cout << returned_ducks << '\n';
    }
    return 0;
}