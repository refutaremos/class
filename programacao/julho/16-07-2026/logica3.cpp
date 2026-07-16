#include <iostream>
using namespace std;

int main() {
    float n1, n2, resultado;
    char op;

    cin >> n1 >> n2 >> op;

    if (op == '+') {
        resultado = n1 + n2;
    } else if (op == '-') {
        resultado = n1 - n2;
    } else if (op == '*') {
        resultado = n1 * n2;
    } else if (op == '/') {
        if (n2 != 0) {
            resultado = n1 / n2;
        } else {
            cout << "Erro: Divisão por zero!" << endl;
            return 1; // Retorna um código de erro
        }
    } else {
        cout << "Operador inválido!" << endl;
        return 1; // Retorna um código de erro
    }
    cout << "Resultado: " << resultado << endl;
    return 0;
}