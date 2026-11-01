//6. Escreva uma função que retorna o numero de inteiros impares que existem entre
//n1 e n2 (inclusive ambos, se for o caso). A função deve funcionar inclusive se o
//valor de n2 for menor que n1.

#include <iostream>
using namespace std;

int contImpIntervalo(int n1, int n2){
	int inicio, fim;
	if(n1 <= n2){
		inicio = n1;
		fim = n2;
	}else{
		inicio = n2;
		fim = n1;
	}
	int contImpares = 0;
	for(int i = inicio; i <= fim; i++)
		if(i % 2 != 0)
			contImpares++;
	return contImpares;
}

//função principal

int main(){
	int n1, n2;
	cout << "Digite dois valores inteiros: ";
	cin >> n1 >> n2;
	int resultado = contImpIntervalo(n1, n2);
	cout << "Quantidade de impares no intervalo: "
		 << resultado << endl;
	return 0;
}
