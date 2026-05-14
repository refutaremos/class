#include <iostream>
using namespace std;

int main() {
    int idade;

    cout << "Digite a idade: ";
    cin >> idade;

    if (idade < 0) {
        cout << "Idade invalida." << endl;
    } else if (idade < 18) {
        cout << "Menor de idade" << endl;
    } else if (idade <= 60) {
        cout << "Adulto" << endl;
    } else {
        cout << "Idoso" << endl;
    }

    return 0;
}