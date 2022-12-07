#include <iostream>

int main() {
    int i = 1;
    for (int j{ 60 }; j >= 0; j -= 5) {
        std::cout << "I=" << i << " J="<< j << '\n';
        i += 3;
    }

    return 0;
}