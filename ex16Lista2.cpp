/* 16. Escreva uma função para calcular o valor de E: 

E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/(k - 1)! + 1/K!

A função dever um valor real x representando o valor maximo (tolerancia) para a difença
entre dois termos consecutivos. Isto é, o cálculo do valor de E deve ser computado até 
que | 1/k! - 1/(k + 1)! | < x. Imprima cada termo gerado e o resultado do E ao final.*/

#include <iostream>
#include <iomanip>
using namespace std;

void calcularEulerTolerancia (float x){
	if ( x <= 0) return;
	
	
	float e = 1.0;
	float termo = 1.0;
	int k = 2;

	cout << fixed << setprecision (8);
	cout << "Termo: " << termo << endl;
	
	while (true){
		e += termo;
		cout << "Termo: " << termo << endl;

		float proximoTermo = termo / k;
		float diferenca = termo - proximoTermo;

		if (diferenca < x){
			break;
		}
		
		termo = proximoTermo;
		k++;
	}
	cout << "\nResultado de E ao final: " << e << endl; 
}

int main(){
	float x;
	cout << "Digite o valor maximo de tolerencia x, ex: 0.0001): ";
	cin >> x;

	calcularEulerTolerancia(x);
	
	return 0;
}
