// Leia a idade de 20 pessoas e exiba a média das idades

#include <iostream>

int main() {
    int idade, soma = 0;

    std::cout << "Digite a idade de 20 pessoas: " << std::endl;

    for (int i = 0; i < 20; i++) {
        std::cin >> idade;
        soma += idade; // Adiciona a idade à soma
    }

    double media = static_cast<double>(soma) / 20; // Calcula a média
    std::cout << "A média das idades é: " << media << std::endl;

    return 0;
}