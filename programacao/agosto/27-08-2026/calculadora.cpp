// Implementação de uma calculadora modular
// Usando Declarações e Definições, Funções e Passagem de Valores

#include <iostream>
using namespace std;

// Prototipo
float soma(int a, int b);
float subtracao(int a, int b);
float multiplicacao(int a, int b);
float divisao(int a, int b);

int main(void) {
    cout << "Calculadora" << endl;

    int a, b;
    cout << "Digite o valor de a: ";
    cin >> a;

    cout << "Digite o valor de b: ";
    cin >> b;

    cout << "1. Soma\n2.Subtracao\n3.Multiplicacao\n4.Divisao" << endl;
    int opcao;
    cout << "Digite a opcao desejada: ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            cout << soma(a, b) << endl;
            break;
        case 2:
            cout << subtracao(a, b) << endl;
            break;
        case 3:
            cout << multiplicacao(a, b) << endl;
            break;
        case 4:
            cout << divisao(a, b) << endl;
            break;
        default:
            cout << "Opcao invalida" << endl;
    }

    return 0;
}

float soma(int a, int b) {
    return a + b;
}

float subtracao(int a, int b) {
    return a - b;
}

float multiplicacao(int a, int b) {
    return a * b;
}

float divisao(int a, int b) {
    if (b == 0) {
        cout << "Erro: Nao pode dividir por zero" << endl;
        return 0;
    }
    return a / b;
}