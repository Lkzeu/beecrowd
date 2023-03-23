#include <iostream>
#include <string>
#include <map>

int main()
{
    // how it starts from 0 and is linear. Can use array instead
    std::map<int, std::string> songs {
        {0, "PROXYCITY"},   {1, "P.Y.N.G."},
        {2, "DNSUEY!"},     {3, "SERVERS"},
        {4, "HOST!"},       {5, "CRIPTONIZE"},
        {6, "OFFLINE DAY"}, {7, "SALT"},
        {8, "ANSWER!"},     {9, "RAR?"},
        {10, "WIFI ANTENNAS"}
    };

    int test_cases;
    std::cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int button1;
        int button2;
        std::cin >> button1 >> button2;

        int song{ button1 + button2 };
        std::cout << songs[song] << '\n';
    }
    return 0;
}