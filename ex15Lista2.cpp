/* 15. Escreva uma função que gere e imprima o quinto número natural perfeito. Um número
perfeito é aquele que é igual à soma dos seus divisores exceto o próprio número.
Ex.: 6 = 1 + 2 + 3; 28 = 1 + 2 + 4 + 7 + 14, etc.)*/

#include <iostream>
using namespace std;

bool ehPerfeito (int n){
	if (n <= 0){
		return false;
	}
	int somaDivisores = 0;
	for (int i = 1; i <= n/2; i++){
		if (n % i == 0){
			somaDivisores += i;
		}
	}
	return (somaDivisores == n);
}

int main(){
	int n;
	cout << "Digite um numero inteiro positivo: ";
	cin >> n;
	if (ehPerfeito(n)){
		cout << n << " eh um numero perfeito!" << endl;
	} else {
		cout << n << " não eh um numero pergeito." << endl;
	}
	return 0;
}
