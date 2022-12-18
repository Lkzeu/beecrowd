#include <iostream>

int get_fib() {
    static int first{ 0 };
    static int second{ 1 };
    
    auto third = second + first;
    first  = second;
    second = third;
    
    return third;
}

int main() {
    int show_sequence{};
    std::cin >> show_sequence;
    
    auto fib{ 0 }; 
    char end_of_message{};
    for (auto i = 0; i < show_sequence; ++i) {
        if (i < 2) {
            fib = i;
        }
        else {
            fib = get_fib();
        }

        end_of_message = ' ';
        if (i == (show_sequence - 1)) {
            end_of_message = '\n';
        }
        std::cout << fib << end_of_message;
    }
    return 0;
}