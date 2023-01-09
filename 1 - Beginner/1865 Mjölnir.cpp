#include <iostream>
#include <string>

int main()
{
    const std::string thor{ "Thor" };
    
    int test_cases{};
    std::cin >> test_cases;
    for (int i = 0; i < test_cases; ++i)
    {
        std::string name{};
        int force_applied{};
        
        std::cin >> name >> force_applied;
        std::cout << (name == thor ? 'Y' : 'N') << '\n';
    }
    return 0;
}