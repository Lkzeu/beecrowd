#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> cities;

    cities[61] = "Brasilia";
    cities[71] = "Salvador";
    cities[11] = "Sao Paulo";
    cities[21] = "Rio de Janeiro";
    cities[32] = "Juiz de Fora";
    cities[19] = "Campinas";
    cities[27] = "Vitoria";
    cities[31] = "Belo Horizonte";

    int ddd{};
    std::cin >> ddd;
    if (cities.count(ddd)) {
        std::cout << cities[ddd] << '\n';
    }
    else {
        std::cout << "DDD nao cadastrado\n";
    }
    return 0;
}