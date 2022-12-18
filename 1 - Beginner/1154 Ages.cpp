#include <iostream>
#include <iomanip>

int main() {
    int sum_ages{ 0 };
    int age{ 0 };
    int individuals{ 0 };
    while(true) {
        std::cin >> age;
        if(age < 0) {
            break;
        }

        sum_ages += age;
        ++individuals;
    }
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << static_cast<double>(sum_ages) / individuals << '\n';

    return 0;
}