/* 17. Escreva uma função que retorna o numero de inteiros impares que existem entre
n1 e n2 (inclusive ambos, se for o caso). A função deve funcionar inclusive se o valor 
de n2 for menor que n1. */

#include <iostream>
using namespace std;

int contarImpares( int n1, int n2){
	if(n1 > n2){
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}
	
	int contador = 0;
	
	for (int i = n1; i <= n2; i++){
		if(i % 2 != 0) contador ++;
	}
	return contador;
}

int main(){
	int num1, num2;
	
	cout << "Digite o primeiro numero: ";
	cin >> num1;
	cout << "Digite o segundo numero: ";
	cin >> num2;

	int totalImpares = contarImpares(num1, num2);

	cout << "Existem " <<totalImpares 
		 << " numeros impares no intervalo." << endl;

	return 0;	
}
