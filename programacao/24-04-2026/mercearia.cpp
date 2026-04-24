/* Programa de caixa de mercearia de bairro
O programa deve ser capaz de somar o valor unitário de um produto do comércio recebendo como entrada apenas o código identificador dele
Esse programa vai pedir um código de 3 dígitos, retornar produto, valor unitario e total até o momento, para finalizar a compra, o usuário deve digitar 'f', senão, continuar
produtos já populados:

101 - detergente - 1,99
101 - esponja - 4,59
102 - lã de aço - 1,79
*/

#include <iostream>
using namespace std;

int main() {
    int codigo;
    double total = 0.0;
    char continuar;

    do {
        cout << "Digite o código do produto (ou 'f' para finalizar): ";
        cin >> codigo;

        if (codigo == 101) {
            cout << "Produto: Detergente - Valor unitário: R$ 1,99" << endl;
            total += 1.99;
        } else if (codigo == 102) {
            cout << "Produto: Esponja - Valor unitário: R$ 4,59" << endl;
            total += 4.59;
        } else if (codigo == 103) {
            cout << "Produto: Lã de aço - Valor unitário: R$ 1,79" << endl;
            total += 1.79;
        } else if (codigo == 'f' || codigo == 'F') {
            break; // Finaliza a compra
        } else {
            cout << "Código inválido! Por favor, digite um código válido." << endl;
        }

        cout << "Total até o momento: R$ " << total << endl;

    } while (true);

    cout << "Compra finalizada! Total a pagar: R$ " << total << endl;

    return 0;
}