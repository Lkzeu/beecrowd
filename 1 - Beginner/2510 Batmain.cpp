#include <iostream>
#include <string>
 
int main() {
 
    int villains{};
    std::cin >> villains;
    
    for (int i = 0; i < villains; i++)
    {
        std::string villain_name;
        std::cin >> villain_name;
        std::cout << "Y\n"; // all villains were captured...
    } 
    return 0;
}