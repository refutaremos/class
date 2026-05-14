#include <iostream>

int main() {
    int quantidade;
    double preco;
    double total = 0.0;

    std::cout << "Digite a quantidade de produtos: ";
    std::cin >> quantidade;

    for (int i = 0; i < quantidade; i++) {
        std::cout << "Digite o preco do produto " << (i + 1) << ": ";
        std::cin >> preco;
        total += preco;
    }

    std::cout << "Total a pagar: " << total << std::endl;
    return 0;
}
