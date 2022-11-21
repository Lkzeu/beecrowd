/* Write a program that keep reading a password until it is valid. 
 * For each wrong password read, write the message "Senha inválida". 
 * When the password is typed correctly print the message 
 * "Acesso Permitido" and finished the program. The correct password is the number 2002.
 */

#include <iostream>

int readNumber() {
    int x{};
    std::cin >> x;
    return x;
}

int main() {
    int password{ 2002 };
    int guess{ readNumber() };
    
    while(guess != password) {
        std::cout << "Senha Invalida\n";
        guess = readNumber();
    }

    std::cout << "Acesso Permitido\n";
    return 0;
}