#include <iostream>
using namespace std;

int main() {
    int opcao;

    cout << "Escolha uma opcao:\n";
    cout << "1 - Calcular tamanho da parede\n";
    cout << "2 - Calcular quantidade de blocos\n";
    cout << "Opcao: ";
    cin >> opcao;

    if (opcao == 1) {
        int quantidade;
        float largura_bloco, altura_bloco;

        cout << "Quantidade de blocos: ";
        cin >> quantidade;

        cout << "Largura do bloco (m): ";
        cin >> largura_bloco;

        cout << "Altura do bloco (m): ";
        cin >> altura_bloco;

        float area_bloco = largura_bloco * altura_bloco;
        float area_total = quantidade * area_bloco;

        cout << "Area total da parede: " << area_total << " m²\n";
    }
    else if (opcao == 2) {
        float largura_parede, altura_parede;
        float largura_bloco, altura_bloco;

        cout << "Largura da parede (m): ";
        cin >> largura_parede;

        cout << "Altura da parede (m): ";
        cin >> altura_parede;

        cout << "Largura do bloco (m): ";
        cin >> largura_bloco;

        cout << "Altura do bloco (m): ";
        cin >> altura_bloco;

        float area_parede = largura_parede * altura_parede;
        float area_bloco = largura_bloco * altura_bloco;

        int quantidade_blocos = area_parede / area_bloco;

        cout << "Quantidade aproximada de blocos: " << quantidade_blocos << endl;
    }
    else {
        cout << "Opcao invalida!\n";
    }

    return 0;
}
