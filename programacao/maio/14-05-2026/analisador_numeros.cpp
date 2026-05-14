#include <iostream>

int main() {
    int num;
    int pares = 0;
    int impares = 0;
    int soma_positivos = 0;

    for (int i = 0; i < 10; i++) {
        std::cout << "Digite um numero inteiro: ";
        std::cin >> num;

        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        if (num > 0) {
            soma_positivos += num;
        }
    }

    std::cout << "Quantidade de pares: " << pares << std::endl;
    std::cout << "Quantidade de impares: " << impares << std::endl;
    std::cout << "Soma dos positivos: " << soma_positivos << std::endl;

    return 0;
}
