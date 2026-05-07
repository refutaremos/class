// Imprima o nome do usuário 10 vezes usando um loop.
#include <iostream>
#include <string>

int main() {
    std::string nome;
    std::cout << "Digite seu nome: ";
    std::cin >> nome;

    for (int i = 0; i < 10; i++) {
        std::cout << nome << std::endl;
    }

    return 0;
}
