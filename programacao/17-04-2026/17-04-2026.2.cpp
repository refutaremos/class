#include <iostream>
using namespace std;

int main() {
    int quantidade;
    double preco, total;

    cout << "Digite o numero de macas: ";
    cin >> quantidade;

    if (quantidade < 12) {
        preco = 0.30;
    } else {
        preco = 0.25;
    }

    total = quantidade * preco;

    cout << "Custo total: R$ " << total << endl;

    return 0;
}