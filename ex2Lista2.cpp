//2.Escreva uma função que leia do teclado um valor n e imprima todos os multiplos
//de n no intervalo entre n e seu quadrado, em forma de tabuada, 
//como o exemplo abaixo:

//(n=4)

//1 x 4 = 4
//2 x 4 = 8
//3 x 3 = 12
//4 x 4 = 16

#include <iostream>
using namespace std;

void printTabuadaMultiplos(){
	int n;
	cout << "Digite um numero inteiro positivo: ";
	cin >> n;
	for(int i = 1; i <= n; i++)
		cout << i << " X " << n << " = " 
			 << (i * n) << endl;
}
int main(){
	printTabuadaMultiplos();
	return 0;
}
