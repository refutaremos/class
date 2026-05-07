// peca 10 numeros ao usuario usando for e some todos.

#include <iostream>
int main() {
    double numero, soma = 0.0;

    std::cout << "Digite 10 numeros: " << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cin >> numero;
        soma += numero; // Adiciona o número à soma
    }

    std::cout << "A soma dos numeros é: " << soma << std::endl;

    return 0;
}