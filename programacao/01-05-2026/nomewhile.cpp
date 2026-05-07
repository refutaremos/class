// Imprima o nome do usuário 10 vezes usando um loop. usando while

#include <iostream>
#include <string>

int main() {
    std::string nome;
    std::cout << "Digite seu nome: ";
    std::cin >> nome;

    int i = 0;
    while (i < 10) {
        std::cout << nome << std::endl;
        i++;
    }

    return 0;
}