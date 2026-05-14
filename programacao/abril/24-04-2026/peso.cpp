#include <iostream>
using namespace std;

/* peso ideal de um usuario de acordo com um caractere identificador de sexo (m = masculino, f = feminino) inserido pelo mesmo. caso m: (peso-100)x0.9 , feminino: (peso-100)x0.85 */

int main() {
    char sexo;
    double peso, peso_ideal;

    cout << "Digite seu sexo (m para masculino, f para feminino): ";
    cin >> sexo;
    cout << "Digite seu peso atual: ";
    cin >> peso;

    if (sexo == 'm' || sexo == 'M') {
        peso_ideal = (peso - 100) * 0.9;
        cout << "Peso ideal para masculino: " << peso_ideal << " kg" << endl;
    } else if (sexo == 'f' || sexo == 'F') {
        peso_ideal = (peso - 100) * 0.85;
        cout << "Peso ideal para feminino: " << peso_ideal << " kg" << endl;
    } else {
        cout << "Sexo inválido! Por favor, digite 'm' para masculino ou 'f' para feminino." << endl;
    }

    return 0;
}