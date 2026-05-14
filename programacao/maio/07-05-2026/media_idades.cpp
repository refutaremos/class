#include <iostream>

int main() {
    int idade;
    int soma = 0;

    for (int i = 0; i < 20; i++) {
        std::cout << "Digite a idade da pessoa " << (i + 1) << ": ";
        std::cin >> idade;
        soma += idade;
    }

    double media = soma / 20.0;
    std::cout << "Media das idades: " << media << std::endl;
    return 0;
}
