#include <iostream>
#include <string>
using namespace std;

int main() {
    string senha, confirmacao;

    cout << "Digite a senha: ";
    cin >> senha;

    cout << "Digite novamente a senha: ";
    cin >> confirmacao;

    if (senha == confirmacao) {
        cout << "Senha Criada com Sucesso!" << endl;
    } else {
        cout << "As senhas nao conferem" << endl;
    }

    return 0;
}