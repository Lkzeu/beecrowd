#include <iostream>
#include <cstdio>

int main()
{
    short amount_of_as;
    std::cin >> amount_of_as;

    std::string as(amount_of_as, 'a');
    std::printf("Feliz nat%sl!\n", as.c_str());
    //std::cout << "Feliz nat" << as << "l!\n"; // or use the c++ cout
    return 0;
}