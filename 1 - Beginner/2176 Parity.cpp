#include <iostream>
#include <string>
#include <cstddef>

int main()
{
    std::string message{};
    std::cin >> message;
    int counter = 0;
    for (std::size_t index; index < message.length(); index++)
        counter += (message.at(index) & 1);

    //std::string new_message{ message + std::to_string(counter & 1)};
    std::cout << message << (counter & 1) << '\n';
    return 0;
}