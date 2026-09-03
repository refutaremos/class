#include <iostream>

// Função auxiliar para calcular raiz quadrada sem cmath (Método Babilônico)
double meuSqrt(double n) {
    if (n <= 0) return 0;
    double x = n;
    double y = 1;
    double tolerancia = 0.00001;
    while (x - y > tolerancia) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

void bhaskara(double a, double b, double c, double &r1, double &r2, bool &possivel) {
    double delta = (b * b) - (4 * a * c);
    if (a == 0 || delta < 0) {
        possivel = false;
    } else {
        possivel = true;
        double raizDelta = meuSqrt(delta);
        r1 = (-b + raizDelta) / (2 * a);
        r2 = (-b - raizDelta) / (2 * a);
    }
}
