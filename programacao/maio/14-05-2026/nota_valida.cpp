#include <iostream>

int main() {
    double nota;

    while (true) {
        std::cout << "Digite uma nota entre 0 e 10: ";
        std::cin >> nota;

        if (nota >= 0 && nota <= 10) {
            break;
        }

        std::cout << "Nota invalida, tente novamente" << std::endl;
    }

    std::cout << "Nota valida: " << nota << std::endl;
    return 0;
}
