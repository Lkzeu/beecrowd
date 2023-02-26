#include <iostream>
#include <string>

int main()
{
    std::string name{};
    std::getline(std::cin, name);

    constexpr int max_name_length { 80 };
    std::cout << (name.length() <= max_name_length 
        ? "YES\n" : "NO\n");

    return 0;
}