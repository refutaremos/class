#include <iostream>
using namespace std;

/* Programa que receba como entrada um número inteiro que represente um dos 7 dias da semana e imprima na tela se esse dia é útil, final de semana ou inválido (domindo é dia 1, sábado é dia 7)*/

int main() {
    int dia;
    cout << "Digite um número de 1 a 7 para representar um dia da semana (1 para domingo, 7 para sábado): ";
    cin >> dia;

    switch (dia) {
        case 1:
            cout << "Domingo: Final de semana" << endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            cout << "Dia útil" << endl;
            break;
        case 7:
            cout << "Sábado: Final de semana" << endl;
            break;
        default:
            cout << "Número inválido! Por favor, digite um número entre 1 e 7." << endl;
            break;
    }

    return 0;
}