/* 14. Escreva uma função que recebe um valor N inteiro e que calcula o valor aproximado
de PI considerando N termos na equeção:
PI = 4 (1 - 1/3 + 1/5 - 1/7 - 1/11 + 1/13 ...)
A função deve imprimir a expressão (com cada termo utilizado no cálculo) e o resultado 
obitdo.*/

#include <iostream>
using namespace std;

float calcularPI (int n){
	if (n <= 0){
		cout << "Valor invalido para N!" << endl;
		return 0.0;
	}
	float soma = 0.0;
	cout << "PI = 4 * ( ";
	for (int i = 1; i <= n; i++){
		int den = 2 * i - 1;
		if (i % 2 != 0){
			soma += 1.0/den;
			if (i > 1) cout << " + ";
			cout << "1/" << den;
			} else {
				soma -= 1.0/den;
				cout << " -1/" << den;
			}
		}
	cout << " )" << endl;
	float pi = 4.0 * soma;
	return pi;
}

int main(){
	int n;
	cout << "Digite a quantidade de termos N: ";
	cin >> n;
	float resultado = calcularPI(n);
	cout << "Valor aproximado de PI: " << resultado << endl;
	return 0;
}
