#include <iostream>
#include <iomanip>

double calculatePercentual(int parcial, int total) {
    return ((static_cast<double>(parcial) / total) * 100.00);
}

int main() {
    int test_cases{};
    std::cin >> test_cases;

    int coelhos{}, ratos{}, sapos{};
    char type;
    int quantity{};
    for (int i = 0; i < test_cases; ++i) {
        std::cin >> quantity >> type;

        switch (type)
        {
        case 'C':
            coelhos += quantity;
            break;
        
        case 'R':
            ratos += quantity;
            break;
        
        case 'S':
            sapos += quantity;
            break;
        }
    }
    int total{ coelhos + ratos + sapos };
    std::cout << "Total: " << total << " cobaias\n";
    std::cout << "Total de coelhos: " << coelhos << '\n';
    std::cout << "Total de ratos: " << ratos << '\n';
    std::cout << "Total de sapos: " << sapos << '\n';

    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Percentual de coelhos: " << calculatePercentual(coelhos, total) << " %\n";
    std::cout << "Percentual de ratos: " << calculatePercentual(ratos, total) << " %\n";
    std::cout << "Percentual de sapos: " << calculatePercentual(sapos, total) << " %\n";
    return 0;
}