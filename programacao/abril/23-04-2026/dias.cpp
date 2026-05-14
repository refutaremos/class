#include <iostream>
using namespace std;

int main() {
    int dia, mes;
    cout << "Digite o dia: ";
    cin >> dia;
    cout << "Digite o mês: ";
    cin >> mes;

    int dias = 0;
    switch (mes) {
        case 1: dias = dia; break;
        case 2: dias = 31 + dia; break;
        case 3: dias = 31 + 28 + dia; break;
        case 4: dias = 31 + 28 + 31 + dia; break;
        case 5: dias = 31 + 28 + 31 + 30 + dia; break;
        case 6: dias = 31 + 28 + 31 + 30 + 31 + dia; break;
        case 7: dias = 31 + 28 + 31 + 30 + 31 + 30 + dia; break;
        case 8: dias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + dia; break;
        case 9: dias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + dia; break;
        case 10: dias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + dia; break;
        case 11: dias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + dia; break;
        case 12: dias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + dia; break;
        default: cout << "Mês inválido!" << endl; return 1;
    }

    cout << "Dias transcorridos: " << dias << endl;
    return 0;
}