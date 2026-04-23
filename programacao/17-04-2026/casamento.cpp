#include <iostream>
using namespace std;

int main() {
    int anoCasamento, anoAtual;

    cout << "Digite o ano de casamento: ";
    cin >> anoCasamento;

    cout << "Digite o ano atual: ";
    cin >> anoAtual;

    int anos = anoAtual - anoCasamento;

    if (anos == 25) {
        cout << "Bodas de Prata" << endl;
    } else if (anos == 50) {
        cout << "Bodas de Ouro" << endl;
    } else if (anos == 75) {
        cout << "Bodas de Diamante" << endl;
    } else {
        cout << "Anos de casados: " << anos << endl;
    }

    return 0;
}