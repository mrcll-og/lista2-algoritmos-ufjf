//7. Escreva uma função que imprime todos os divisores de um numero inteiro
//passado por parametro.

#include <iostream>
using namespace std;

void printDivisor(int n){
	for(int i = 1; i <= n; i++)
		if(n % i == 0)
			cout << i << " ";
	cout << endl;
}

//função principal

int main(){
	int n;
	cout << "Digite um numero: ";
	cin >> n;
	printDivisor(n);
	return 0;
}
