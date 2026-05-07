// Programa que calcula media de usuários com controle orientado por sentinela ( o usuário decide quando parar de inserir dados ), sem iomanip

#include <iostream>

int main() {
    double nota, soma = 0.0;
    int contador = 0;

    std::cout << "Digite as notas dos alunos (digite -1 para parar): " << std::endl;

    while (true) {
        std::cin >> nota;

        if (nota == -1) {
            break;
        }

        soma += nota;
        contador++;
    }

    if (contador > 0) {
        double media = soma / contador; // Calcula a média
        std::cout << "A média das notas é: " << media << std::endl;
    } else {
        std::cout << "Nenhuma nota foi inserida." << std::endl;
    }

    return 0;
}