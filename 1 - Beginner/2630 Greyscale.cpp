#include <iostream>
#include <algorithm>
#include <string_view>
#include <string>
#include <cstdio>

enum Functions 
{
    min,
    max,
    mean,
    eye,
    total_func,
};

int minimum(int a, int b, int c) {
    return std::min(a, std::min(b, c));
}

int maximum(int a, int b, int c) {
    return std::max(a, std::max(b, c));
}

int avg(int a, int b, int c) {
    return (a + b + c) / 3;
}

int eye_scale(int a, int b, int c) {
    return (0.3 * a) + (0.59 * b) + (0.11 * c);
}

Functions get_func_idx(std::string_view v) {
    if (v == "min")
        return min;
    if (v == "max")
        return max;
    if (v == "mean")
        return mean;
    if (v == "eye")
        return eye;
    return total_func;
}

int main()
{
    int (*func_ptr[total_func])(int, int, int){ minimum, maximum, avg, eye_scale };
    
    int test_cases{};
    std::cin >> test_cases;

    for (int i = 0; i < test_cases; i++)
    {
        std::string option{};
        std::cin >> option;

        int red, green, blue;
        std::cin >> red >> green >> blue;

        Functions func_idx{ get_func_idx(option) };
        int greyscale { func_ptr[func_idx](red, green, blue) };

        std::printf("Caso #%d: %d\n", i + 1, greyscale);
    }

    return 0;
}
