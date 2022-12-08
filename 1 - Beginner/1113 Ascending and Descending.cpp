#include <iostream>

int main() {
    int x{}, y{};    
    while( ((std::cin >> x >> y) , x != y) ) {
        if( x < y) {
            std::cout << "Crescente\n";
            continue;
        }
        std::cout << "Decrescente\n";
    }
    return 0;
}