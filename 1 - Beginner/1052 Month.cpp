#include <iostream>

int main() {
    std::string months[]{"January", "February", "March", "April", "May", "June",
                "July", "August", "September", "October", "November", "December"};

    int month_index{};
    std::cin >> month_index;
    std::cout << months[month_index - 1] << '\n';
    return 0;
}