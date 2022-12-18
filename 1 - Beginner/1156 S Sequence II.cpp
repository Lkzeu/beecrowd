#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[]) {
    auto s{ 1.0 };
    auto aux{ 2.0 };
    for(auto i = 3; i <= 39; i+=2) {
        s += (i / aux);
        aux *= 2;
    }
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << s << '\n';
    return 0;
}
