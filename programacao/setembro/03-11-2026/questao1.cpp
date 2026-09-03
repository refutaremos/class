#include <iostream>
#include <cmath>

double calculaVolumeEsfera(double raio) {
    const double PI = 3.141592653589793;
    return (4.0 / 3.0) * PI * pow(raio, 3);
}

int main() {
    double raio;
    std::cout << "Digite o raio da esfera: ";
    std::cin >> raio;
    std::cout << "Volume: " << calculaVolumeEsfera(raio) << "\n";
    return 0;
}
