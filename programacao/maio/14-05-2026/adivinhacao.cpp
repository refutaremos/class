#include <iostream>
#include <random> // Biblioteca moderna para geração de números aleatórios

int main() {
    // Configuração para gerar um número aleatório entre 1 e 100
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> numero_secreto(1, 100);

    int numero_pensado = numero_secreto(gen);
    int palpite = 0;
    int tentativas = 0;

    std::cout << "=========================================\n";
    std::cout << "   BEM-VINDO AO JOGO DE ADIVINHACAO!     \n";
    std::cout << "=========================================\n";
    std::cout << "Eu pensei em um numero entre 1 e 100.\n";
    std::cout << "Tente adivinhar qual eh!\n\n";

    // Loop do jogo
    while (palpite != numero_pensado) {
        std::cout << "Digite o seu palpite: ";
        std::cin >> palpite;
        tentativas++; // Incrementa o contador a cada tentativa

        if (palpite < numero_pensado) {
            std::cout << "--> O numero pensado eh MAIOR do que " << palpite << ".\n\n";
        } else if (palpite > numero_pensado) {
            std::cout << "--> O numero pensado eh MENOR do que " << palpite << ".\n\n";
        } else {
            std::cout << "\n=========================================\n";
            std::cout << "PARABENS! Voce acertou o numero!\n";
            std::cout << "O numero era: " << numero_pensado << "\n";
            std::cout << "Total de tentativas: " << tentativas << "\n";
            std::cout << "=========================================\n";
        }
    }

    return 0;
}
