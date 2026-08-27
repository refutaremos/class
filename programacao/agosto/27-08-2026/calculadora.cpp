// Implementação de uma calculadora modular usando Declarações e Definições, Funções e Passagem de Valores

#include <iostream>

// Aqui usamos o namespace std para nao precisar escrever std:: em todo comando usado na calculadora, simplificando o codigo.
using namespace std;

// Prototipos das funcoes da calculadora
// Aqui elas servem para informar ao compilador que essas funcoes existem, mas ainda nao foram implementadas.
float soma(int a, int b);
float subtracao(int a, int b);
float multiplicacao(int a, int b);
float divisao(int a, int b);

int main(void) {
    cout << "Calculadora" << endl;

    // Inicializacao dos dois valores usados na calculadora, sendo eles "a" e "b" do tipo inteiro.
    int a, b;

    // Solicita o usuario o valor de "a".
    cout << "Digite o valor de a: ";
    cin >> a;

    // Solicita o usuario o valor de "b".
    cout << "Digite o valor de b: ";
    cin >> b;

    // Exibe o menu de opcoes da calculadora, que sao: soma, subtracao, multiplicacao e divisao.
    menu();
    
    int opcao;
    cout << "Digite a opcao desejada: ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            // Aqui vem o caso da soma, que invoca a funcao com os argumentos a e b (valores inteiros) e mostra o resultado na tela.
            cout << soma(a, b) << endl;
            break;
        case 2:
            // Ja aqui vem o caso da subtracao, que invoca a funcao com os argumentos a e b (valores inteiros) e mostra o resultado na tela.
            cout << subtracao(a, b) << endl;
            break;
        case 3:
            // Assim como a subtracao ou soma, aqui invocamos multiplicacao() e exibimos o valor na tela.
            cout << multiplicacao(a, b) << endl;
            break;
        case 4:
            // Finalizando, aqui é invocado a funcao divisao() e exibe o valor obtido na tela.
            cout << divisao(a, b) << endl;
            break;
        default:
            // O caso default ja diz que a opcao digitada nao e valida, e exibe uma mensagem de erro na tela.
            // As opcoes validas do programa sao 1, 2, 3 e 4, ler acima para saber o que cada uma faz.
            cout << "Opcao invalida" << endl;
    }

    return 0;
}

// Funcoes da calculadora

void menu() {
    // Aqui temos a exibicao do menu da calculadora, mostrando as opcoes de soma, subtracao, multiplicacao e divisao.
    cout << "1 - Soma" << endl;
    cout << "2 - Subtracao" << endl;
    cout << "3 - Multiplicacao" << endl;
    cout << "4 - Divisao" << endl;
}

float soma(int a, int b) {
    return a + b; // Soma "a + b" e retorna o valor obtido
}

float subtracao(int a, int b) {
    return a - b; // Subtrai "a - b" e retorna o valor obtido
}

float multiplicacao(int a, int b) {
    return a * b; // Multiplica "a * b" e retorna o valor obtido
}

float divisao(int a, int b) {
    // Se em caso de b for igual a zero, retorna uma mensagem de erro, ja que nao e possivel dividir por zero
    if (b == 0) {
        cout << "Erro: Nao pode dividir por zero" << endl;
        return 0;
    }

    // Se tudo certo, retorna o resultado da divisao entre "a" e "b"
    return a / b;
}