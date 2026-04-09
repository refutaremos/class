#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operacao;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "Escolha a operacao (+, -, *, /): ";
    cin >> operacao;

    switch (operacao) {
        case '+':
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Resultado: " << num1 / num2 << endl;
            } else {
                cout << "Erro: divisao por zero!" << endl;
            }
            break;
        default:
            cout << "Operacao invalida!" << endl;
    }

    return 0;
}
