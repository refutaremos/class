#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int num;
	cin >> num;
	
	if(num%2==0){
		cout << "Par\n";
	} else {
		cout << "Impar\n";
	}
	
	if(num>=0){
		cout << "Positivo\n";
	} else {
		cout << "Negativo\n";
	}
	
	return 0;
}
