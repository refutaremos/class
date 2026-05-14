#include <iostream>
#include <string>

int main() {
    std::string nome;
    int n;

    std::cout << "Digite um nome: ";
    std::cin >> nome;
    std::cout << "Digite um numero N: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << nome << std::endl;
    }

    return 0;
}
