/* In this problem you have to read an integer value and calculate 
 * the smallest possible number of banknotes in which the value may be decomposed. 
 * The possible banknotes are 100, 50, 20, 10, 5, 2 e 1. Print the read value and the list of banknotes
 */

#include <iostream>

int main() {
    int value{ };
    std::cin >> value;
    std::cout << value << '\n';
    
    constexpr int numbers_of_notes{ 7 };
    int bank_notes_counter[ numbers_of_notes ];
    int bank_notes[] {100, 50, 20, 10, 5, 2, 1};

    for(int i = 0; i < numbers_of_notes; ++i) {
        bank_notes_counter[i] = value / bank_notes[i];
        value %= bank_notes[i];
    }

    for(int i = 0; i < numbers_of_notes; ++i) {
        std::cout << bank_notes_counter[i] << " nota(s) de R$ " << bank_notes[i] << ",00\n";
    }

    return 0;
}