#include <iostream>

int main() {
    // using '==' with floating point numbers are dangerous because it uses approximations
    // so the exactly value could be different of the literal we use on the condicional expression!
    for(double i{ 0 }; i < 2.1; i += 0.2) {
        for (double j{ i + 1.0 }; j < (i + 3.1); ++j) {
            std::cout << "I=" << i << " J="<< j << '\n';
        }
    }

    return 0;
}