#include <iostream>
using namespace std;

int main() {
    string classe, locomocao, ordem;

    cin >> classe;

	// Mamifero
    if (classe == "mamifero") {
        cin >> locomocao;

		// Se for quadrupede
        if (locomocao == "quadrupede") {
            cin >> ordem;

            if (ordem == "carnivoro")
                cout << "Leao";
            else if (ordem == "herbivoro")
                cout << "Cavalo";
            else
                cout << "Opcao Invalida";
        }
        
        // Se for bipede
        else if (locomocao == "bipede") {
            cin >> ordem;

            if (ordem == "onivoro")
                cout << "Homem";
            else if (ordem == "frugivoro")
                cout << "Macaco";
            else
                cout << "Opcao Invalida";
        }
        
        // Se for voador
        else if (locomocao == "voador") {
            cout << "Morcego";
        }
        
        // Se for aquatico
        else if (locomocao == "aquatico") {
			cout << "Baleia";
		}
        else {
            cout << "Opcao Invalida";
        }
    }
    
    // Aves
    else if (classe == "aves") {
        cin >> locomocao;

        if (locomocao == "voadores") {
            cin >> ordem;

            if (ordem == "carnivoro")
                cout << "Gaviao";
            else if (ordem == "onivoro")
                cout << "Pombo";
            else
                cout << "Opcao Invalida";
        }
        else if (locomocao == "bipede") {
            cout << "Avestruz";
        }
        else if (locomocao == "aquatico") {
            cout << "Pinguim";
        }
        else {
            cout << "Opcao Invalida";
        }
    }
    
    // Repteis
    else if (classe == "repteis") {
		cin >> locomocao;
		
		if (locomocao == "quadrupedes") {
			cout << "Jacare";
		}
		else if (locomocao == "rastejantes") {
			cout << "Cobra";
		}
		else {
			cout << "Opcao Invalida";
		}
	}
	
	// Anfibios
	else if (classe == "anfibios") {
		cin >> locomocao;
		
		if (locomocao == "saltadores") {
			cout << "Sapo";
		}
		else if (locomocao == "quadrupedes") {
			cout << "Salamandra";
		}
		else {
			cout << "Opcao Invalida";
		}
	}
	
	// Peixes
	else if (classe == "peixes") {
		cin >> locomocao;
		
		if (locomocao == "aquaticos") {
			cin >> ordem;
			
			if (ordem == "carnivoro") {
				cout << "Tubarao";
			}
			else if (ordem == "herbivoro") {
				cout << "Carpa";
			}
			else {
				cout << "Opcao Invalida";
			}
		}
	}
}