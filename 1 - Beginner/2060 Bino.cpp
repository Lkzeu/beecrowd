#include <iostream>
#include <map>

int multiple(int number, int mult)
{
    return number % mult == 0;
}

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    std::map<int, int> multiples_counter{{2, 0}, {3, 0}, {4, 0}, {5, 0}};
    
    for (int test = 0; test < test_cases; ++test)
    {
        int number{};
        std::cin >> number;
        multiples_counter.at(5) += multiple(number, 5);
        multiples_counter.at(4) += multiple(number, 4);
        multiples_counter.at(3) += multiple(number, 3);
        multiples_counter.at(2) += multiple(number, 2);
    }

    for (auto& [key, value] : multiples_counter)
    {
        std::cout << value <<" Multiplo(s) de " << key << '\n';
    }
    
    return 0;
}