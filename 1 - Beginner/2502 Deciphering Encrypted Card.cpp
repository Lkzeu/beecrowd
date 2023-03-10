#include <iostream>
#include <string>

char replaceChar(char c, 
        const std::string& tableSrc,
        const std::string& tableDst)
{
    static auto isUpperCase{ [](char c){ return c >= 65 && c <= 90; } };
    static auto isLowerCase{ [](char c){ return c >= 97 && c <= 122; } };

    auto tablePos{ tableSrc.find((isLowerCase(c) ? c - 32: c)) };
    if (tablePos != std::string::npos)
    {
        char new_c{ tableDst.at(tablePos) };
        if (isUpperCase(new_c))
            return new_c + (isUpperCase(c) ? 0 : 32);
        return new_c;
    }
    return c;
}

int main()
{
    //freopen("test.txt", "r", stdin);
    int size_cipher{};
    int amount_encrypted_msg{};
    while (std::cin >> size_cipher >> amount_encrypted_msg)
    {
        std::string first_cipher{};
        std::string second_cipher{};
        std::getline(std::cin >> std::ws, first_cipher);
        std::getline(std::cin >> std::ws, second_cipher);
        
        for (int i{0}; i < amount_encrypted_msg; i++)
        {  
            std::string setence{};
            std::getline(std::cin >> std::ws, setence);

            for (auto& c: setence)
            {
                char c_updated { replaceChar(c, first_cipher, second_cipher) };
                if (c != c_updated)
                    c = c_updated;
                else
                    c = replaceChar(c, second_cipher, first_cipher);
            }
            std::cout << setence << '\n';
        }
        std::cout << '\n';
    }
    return 0;
}