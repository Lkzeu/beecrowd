#include <iostream>
#include <iomanip>
#include <string>

void count_number_of_notes_or_coins(const int iterations, int &value, int bank_counter[], int fiat_values[]) {
    for(int i{ 0 } ; i < iterations; ++i) {
        bank_counter[i] = value / fiat_values[i];
        value %= fiat_values[i];
    }
}

void print_info(const int iterations, int bank_counter[], int bank_notes[], bool isNote = false) {
    std::cout << (isNote ? "NOTAS:\n" : "MOEDAS:\n");
    std::string type = (isNote ? "nota" : "moeda");
    int conversor{ 100 };  // we multiply 100 times on main, so need to divide it here to show correctly! 
    
    for(int i{ 0 }; i < iterations ; ++i) {
        std::cout << bank_counter[i] << " " << type << "(s) de R$ " << static_cast<double>(bank_notes[i]) / conversor << '\n';
    }
}

int main() {
    double start_value{ };
    std::cin >> start_value;
    std::cout << std::setprecision(2) << std::fixed;

    constexpr int numbers_of_notes{ 6 };
    int bank_notes_counter[ numbers_of_notes ];
    // notes * 100 to handle rounding floating point errors when given x.78 or x.88 as start_value! (x >= 2)
    // which leads to 1 0.01 coin out on output result, although beecrowd keep accepting it. 
    int bank_notes[] {10000, 5000, 2000, 1000, 500, 200}; 
    int notes_value{ static_cast<int>(start_value * 100.00) };

    count_number_of_notes_or_coins(numbers_of_notes, notes_value, bank_notes_counter, bank_notes);
    print_info(numbers_of_notes, bank_notes_counter, bank_notes, true);

    constexpr int numbers_of_coins{ 6 };
    int bank_coins_counter[ numbers_of_coins ];
    int bank_coins[] {100, 50, 25, 10, 5, 1}; // coin * 100
    int coins_value{ notes_value };

    count_number_of_notes_or_coins(numbers_of_coins, coins_value, bank_coins_counter, bank_coins);
    print_info(numbers_of_coins, bank_coins_counter, bank_coins);
    
    return 0;
}