#include <iostream>

bool isPrime(const int number) {
    for(auto i = 2; i < number; ++i) {
        if(number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int test_cases{};
    std::cin >> test_cases;

    for(int i = 0; i < test_cases; ++i) {
        int number{};
        std::cin >> number;
        if(isPrime(number)) {
            std::cout << number << " eh primo\n";
            continue;
        }
        std::cout << number << " nao eh primo\n";
    }    
    return 0;
}