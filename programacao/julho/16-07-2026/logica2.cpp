#include <iostream>
using namespace std;

int main() {
    do {
        cout << "Digite 1° numero n1";
        float n1;
        cin >> n1;
        cout << "Digite 2° numero n2";
        float n2;
        cin >> n2;

    } while (n1 >= 0 && n2 >= 0);

    float media = (n1 + n2) / 2;

    cout << "A media dos numeros digitados é: " << media << endl;
    return 0;
}