#include <iostream>
using namespace std;

int calculaFatorial(int x){
	if(x < 0) 
		return -1;
	int fat = 1;
	for( int i = 1; i <= x; i++){
		fat *= i;
	}
	return fat;
}

void geraTabelaValores(){
	int n;
	cout << "Digite a quantidade de valores: ";
	cin >> n;
	if(n <= 0){
		cout << "Quantidade invalida!" << endl;
		return;
	}
	cout << "\nx \t2x \tx*x \tx!" << endl;
	for (int i = 1; i <= n; i++){
		int x;
		cin >> x;
		int dobro = 2 * x;
		int quadrado = x * x;
		int fatorial = calculaFatorial(x);
		cout << x << "\t" << dobro << "\t" << quadrado 
			 << "\t" << fatorial << endl;
	}
}

int main(){
	geraTabelaValores();
	return 0;
}
