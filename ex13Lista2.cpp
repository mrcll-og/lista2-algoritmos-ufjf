/* 13. Escrever uma função que recebe um valor N inteiro e positivo e retorna a soma
S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N, imprimindo cada termo gerado e o valor final de S.
*/

#include <iostream>
using namespace std;

float calcularSomaHarmonica (int n){
	if (n <= 0){
		cout << "Valor invalido para N!" << endl;
		return 0.0;
	}
	float soma = 0.0;
	cout << "Termos gerados: ";
	for (int i = 1; i <= n; i++){
		float termo = 1.0/i;
		soma += termo;
		cout << "1/" << i;
		if (i < n){
			cout << " + ";
		}
	}
	cout << endl;
	return soma;
}

int main(){
	int n;
	cout << "Digite um valor inteiro e positivo N: ";
	cin >> n;
	float resultado = calcularSomaHarmonica(n);
	cout << "Valor final de S =" << resultado << endl;
	return 0;
}
