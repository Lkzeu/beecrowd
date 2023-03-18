#include <string>
#include <cstddef>
#include <algorithm>
#include <iostream>

inline void reverseStr(std::string& s)
{
    auto size = s.length();
    for (std::size_t i = 0; i < size / 2; i++)
        std::swap(s.at(i), s.at(size - 1 - i));
}

inline bool isLetter(char c)
{
    return ((c >= 'A' && c <= 'Z') ||
            (c >= 'a' && c <= 'z'));
}

void displaceCharsInString(std::string& s, int displace, bool all = true)
{
    for (auto& c: s)
    {
        if(all && !isLetter(c))
            continue;
        c = c + displace;
    }
}

int main()
{
    int lines{};
    std::cin >> lines;
    for (int i = 0; i < lines; i++)
    {
        std::string line{};
        std::getline(std::cin >> std::ws, line);
        
        displaceCharsInString(line, 3);
        reverseStr(line);

        int half = line.length() / 2;
        std::string truncated_s = line.substr(half);
        displaceCharsInString(truncated_s, -1, false);

        std::cout << line.substr(0, half) << truncated_s << '\n';
    }
    return 0;
}