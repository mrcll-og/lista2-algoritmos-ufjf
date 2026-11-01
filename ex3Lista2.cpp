//3. Escreva uma função que leia os valores n1e n2 e imprima o intervalo fechado
//entre esses dois valores

//Exemplo: se os valores lidos forem 5 e 2, a saida devera ser 5 4 3 2.

#include <iostream>
using namespace std;

void printIntervalo(){
	int n1, n2;
	cout << "Digite o valor de n1 e n2: ";
	cin >> n1 >> n2;
	if(n1 <= n2)
		for(int i = n1; i <= n2; i++)
			cout << i << " ";
	else
		for(int i = n1; i >= n2; i--)
			cout << i << " ";
	cout << endl;
}

//função principal

int main(){
	printIntervalo();
	return 0;
}
