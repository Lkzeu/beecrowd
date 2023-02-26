#include <iostream>
#include <string>

int main()
{
    std::string tweet{};
    std::getline(std::cin, tweet);
    std::cout << (tweet.length() > 140 ? "MUTE\n" : "TWEET\n");
    return 0;
}