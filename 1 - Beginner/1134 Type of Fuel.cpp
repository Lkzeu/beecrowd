#include <iostream>

int main() {
    int alcohol{}, gasoline{}, diesel{};
    int gas_type{};
    while(gas_type != 4) {
        std::cin >> gas_type;

        switch (gas_type)
        {
        case 1:
            ++alcohol;
            break;
        
        case 2:
            ++gasoline;
            break;
        
        case 3:
            ++diesel;
            break;
        
        }
    }
    std::cout << "MUITO OBRIGADO\n" << "Alcool: " << alcohol << '\n';
    std::cout << "Gasolina: " << gasoline << "\nDiesel: " << diesel << '\n';
    return 0;
}