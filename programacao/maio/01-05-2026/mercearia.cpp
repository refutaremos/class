// Escreva um algoritmo que simule o funcionamento de um caixa de supermercado. O seu algoritmo deve receber do a informação de quantos produtos o cliente comprou e, para cada produto, deverá ler o seu preço. Ao final, deverá informar quanto o cliente deve pagar pelas compras.

#include <iostream>

int main() {
    int quantidadeProdutos;
    double preco, total = 0.0;

    std::cout << "Digite a quantidade de produtos comprados: ";
    std::cin >> quantidadeProdutos;

    for (int i = 0; i < quantidadeProdutos; i++) {
        std::cout << "Digite o preço do produto " << (i + 1) << ": ";
        std::cin >> preco;
        total += preco; // Adiciona o preço do produto ao total
    }

    std::cout << "O total a pagar é: R$ " << total << std::endl;

    return 0;
}