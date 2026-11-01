#include <iostream>
using namespace std;

int somaImpares( int n){
	int soma = 0;
	for (int i = 1; i <= n; i++){
		if( i % 2 != 0){
			soma += i;
		}
	}
	return soma;
}

int main(){
	int n, soma;
	cin >> n;
	soma = somaImpares(n);
	cout << soma;
	return 0;
}
