#include <iostream>

int main() {
    double peso, altura;
    std::cout << "Peso (kg): ";
    std::cin >> peso;
    std::cout << "Altura (m): ";
    std::cin >> altura;

    double imc = peso / (altura * altura);
    std::cout << "IMC: " << imc << "\n";

    if (imc < 18.5) std::cout << "Abaixo do peso\n";
    else if (imc < 25.0) std::cout << "Normal\n";
    else if (imc < 30.0) std::cout << "Sobrepeso\n";
    else std::cout << "Obesidade\n";

    return 0;
}
