#include <iostream>

int main() {
    int numero;
    int soma = 0;

    for (int i = 0; i < 10; i++) {
        std::cout << "Digite um numero: ";
        std::cin >> numero;
        soma += numero;
    }

    std::cout << "Soma dos 10 numeros: " << soma << std::endl;
    return 0;
}
