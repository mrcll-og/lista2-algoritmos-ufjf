//4. Escreva uma função que leia os valores n1, n2 e x, e imprima os multiplos de x
//que pertecem ao intvalo fechado entre n1 e n2, em ordem crescente.

//Exemplo: se os valores lidos forem:

//n1 = 1
//n2 = 7
//x = 3

//a saida devera ser:

//3 6

#include <iostream>
using namespace std;

void printMultiIntervalos(){
	int n1, n2, x;
	cout << "Digite os valores de n1, n2 e x: ";
	cin >> n1 >> n2 >> x;
	int inicio, fim;
	if(n1 <= n2){
		inicio = n1;
		fim = n2;
	}else{
		inicio = n2;
		fim = n1;
	}
	for(int i = inicio; i <= fim; i++)
		if(i % x == 0)
			cout << i << " ";
	cout << endl;
}

//função principal

int main(){
	printMultiIntervalos();
	return 0;
}
