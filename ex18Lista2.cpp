/* 18. Escreva uma função que imprime todos os divisores de um numero inteiro passado
por parametro */

#include <iostream>
using namespace std;

void imprimirDivisores(int n){
	if (n < 0) n = - n;
	
	if (n == 0){
		cout << "O numero O tem infinitos divisores." << endl;
		return;
	}
	
	cout << "Os divisores de " << n << " sao: ";
	
	for (int i = 1; i <= n; i++){
		if (n % i == 0){
			cout << i << " ";
		}
	}
	
	cout << endl;
}

int main(){
	int numero;

	cout << "Digite um numero inteiro: ";
	cin >> numero;

	imprimirDivisores(numero);

	return 0;
}
