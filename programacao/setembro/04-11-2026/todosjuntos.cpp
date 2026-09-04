#include <iostream>
using namespace std;

double volumeEsfera(double raio) {
	return (4.0 / 3.0) * 3.14159 * (raio * raio * raio);
}

double calculaMedia(double n1, double n2, double n3, char tipo) {
	if (tipo == 'A') {
		return (n1 + n2 + n3) / 3.0;
	} else if (tipo == 'P') {
		return (n1 * 5 + n2 * 3 + n3 * 2) / 10.0;
	} else {
		return 3.0 / ((1.0 / n1) + (1.0 / n2) + (1.0 / n3));
	}
}

double raizQuadrada(double n) {
	if (n <= 0) return 0;
	double x = n;
	double y = 1;
	while (x - y > 0.00001) {
		x = (x + y) / 2;
		y = n / x;
	}
	return x;
}

void bhaskara(double a, double b, double c) {
	double delta = (b * b) - (4 * a * c);
	if (a == 0 || delta < 0) {
		cout << "Nao e possivel calcular as raizes." << endl;
	} else {
		double raiz = raizQuadrada(delta);
		cout << "Raiz 1: " << (-b + raiz) / (2 * a) << endl;
		cout << "Raiz 2: " << (-b - raiz) / (2 * a) << endl;
	}
}

void converteTempo(int totalSegundos) {
	int h = totalSegundos / 3600;
	totalSegundos %= 3600;
	int m = totalSegundos / 60;
	int s = totalSegundos % 60;
	cout << h << " horas, " << m << " minutos e " << s << " segundos" << endl;
}

int idadeParaDias(int anos, int meses, int dias) {
	return (anos * 365) + (meses * 30) + dias;
}

bool ehPerfeito(int n) {
	int soma = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			soma += i;
		}
	}
	return soma == n;
}

int categoriaNadador(int idade) {
	if (idade >= 5 && idade <= 7) return 1;
	if (idade >= 8 && idade <= 10) return 2;
	if (idade >= 11 && idade <= 13) return 3;
	if (idade >= 14 && idade <= 17) return 4;
	if (idade >= 18) return 5;
	return 0;
}

bool ehPositivo(int n) {
	return n >= 0;
}

bool ehPar(int n) {
	return n % 2 == 0;
}

char conceitoAluno(double media) {
	if (media <= 4.9) return 'D';
	if (media <= 6.9) return 'C';
	if (media <= 8.9) return 'B';
	return 'A';
}

int main() {
	int opcao;

	do {
		cout << "\n1 - Volume da esfera\n";
		cout << "2 - Calculo da media\n";
		cout << "4 - Formula de Bhaskara\n";
		cout << "5 - Conversao de segundos\n";
		cout << "6 - Idade em dias\n";
		cout << "7 - Numero perfeito\n";
		cout << "8 - Categoria do nadador\n";
		cout << "9 - Numero positivo ou negativo\n";
		cout << "10 - Numero par ou impar\n";
		cout << "11 - Conceito do aluno\n";
		cout << "0 - Sair\n";
		cout << "Escolha uma opcao: ";
		cin >> opcao;

		switch (opcao) {
			case 1: {
				double raio;
				cout << "Digite o raio: ";
				cin >> raio;
				cout << "Volume: " << volumeEsfera(raio) << endl;
				break;
			}
			case 2: {
				double n1, n2, n3;
				char tipo;
				cout << "Digite as tres notas: ";
				cin >> n1 >> n2 >> n3;
				cout << "Digite A, P ou H: ";
				cin >> tipo;
				cout << "Media: " << calculaMedia(n1, n2, n3, tipo) << endl;
				break;
			}
			case 4: {
				double a, b, c;
				cout << "Digite a, b e c: ";
				cin >> a >> b >> c;
				bhaskara(a, b, c);
				break;
			}
			case 5: {
				int segundos;
				cout << "Digite o total de segundos: ";
				cin >> segundos;
				converteTempo(segundos);
				break;
			}
			case 6: {
				int anos, meses, dias;
				cout << "Digite anos, meses e dias: ";
				cin >> anos >> meses >> dias;
				cout << "Idade em dias: " << idadeParaDias(anos, meses, dias) << endl;
				break;
			}
			case 7: {
				int n;
				cout << "Digite um numero: ";
				cin >> n;
				if (ehPerfeito(n)) cout << "O numero e perfeito." << endl;
				else cout << "O numero nao e perfeito." << endl;
				break;
			}
			case 8: {
				int idade, categoria;
				cout << "Digite a idade: ";
				cin >> idade;
				categoria = categoriaNadador(idade);
				if (categoria == 1) cout << "Infantil A" << endl;
				else if (categoria == 2) cout << "Infantil B" << endl;
				else if (categoria == 3) cout << "Juvenil A" << endl;
				else if (categoria == 4) cout << "Juvenil B" << endl;
				else if (categoria == 5) cout << "Adulto" << endl;
				else cout << "Idade invalida" << endl;
				break;
			}
			case 9: {
				int n;
				cout << "Digite um numero: ";
				cin >> n;
				if (ehPositivo(n)) cout << "O numero e positivo." << endl;
				else cout << "O numero e negativo." << endl;
				break;
			}
			case 10: {
				int n;
				cout << "Digite um numero: ";
				cin >> n;
				if (ehPar(n)) cout << "O numero e par." << endl;
				else cout << "O numero e impar." << endl;
				break;
			}
			case 11: {
				double media;
				cout << "Digite a media: ";
				cin >> media;
				cout << "Conceito: " << conceitoAluno(media) << endl;
				break;
			}
			case 0:
				cout << "Saindo..." << endl;
				break;
			default:
				cout << "Opcao invalida." << endl;
		}
	} while (opcao != 0);

	return 0;
}
