#include <iostream>

bool isPrime(const int number) {
    auto sum{ 0 };
    for(auto i = 1; i < number; ++i) {
        if(number % i == 0) {
            sum += i;
        }
    }
    return number == sum;
}

int main() {
    int test_cases{};
    std::cin >> test_cases;

    for(int i = 0; i < test_cases; ++i) {
        int number{};
        std::cin >> number;
        if(isPrime(number)) {
            std::cout << number << " eh perfeito\n";
            continue;
        }
        std::cout << number << " nao eh perfeito\n";
    }    
    return 0;
}