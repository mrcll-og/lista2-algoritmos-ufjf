//1. Escreva uma fução que recebe como parâmetro um número inteiro n.
//A função deve ler n valores do teclado e retornar quantos destes 
//valores são negativos.


#include <iostream>
using namespace std;

int countNeg(int n){
	int valor;
	int contagemNegativos = 0;
	for(int i = 0; i < n; i++){
		cout << "Digite o valor de " << i << ": ";
		cin >> valor;
		if(valor<0)
			contagemNegativos++;
	}
	return contagemNegativos;
}

//fazendo a função principal só por fazer

int main(){
	int n;
	cout << "Quantos valores deseja inserir ?";
	cin >> n;
	if (n <= 0)
		return 1;
	int resultado = countNeg(n);
	cout << "\nTotal de valores negativos lidos: "
		 << resultado << endl;
	return 0;
}
