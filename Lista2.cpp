#include <iostream>
using namespace std;

void imprimirTabuadaMultiplos (){
	int n;
	cout << "\tEx2-Lista 2" << endl;
	cout << "Digite um numero inteiro positivo: ";
	cin >> n;
	for (int i = 1; i <= n; i++){
		cout << i << " X " << n << " = " << (i * n) << endl;
	}
}

void imprimirIntervalo(){
	int n1, n2;
	cout << "\tEx3-Lista 2" << endl;
	cout << "Digite o valor de n1 e n2: ";
	cin >> n1 >> n2;
	if (n1 <= n2){
		for (int i = n1; i <= n2; i++){
			cout << i << " ";
		}
	}else{
		for(int i = n1; i >= n2; i--){
			cout << i << " ";
		}
	}
	cout << endl;
}

void imprimirMultiIntervalos(){
	int n1, n2, x;
	cout << "\tEx4-Lista 2" << endl;
	cout << "Digite os valores de n1, n2 e x: ";
	cin >> n1 >> n2 >> x;
	int inicio, fim;
	if (n1 <= n2){
		inicio = n1;
		fim = n2;
	}else{
		inicio = n2;
		fim = n1;
	}
	for(int i = inicio; i <= fim; i++){
		if(i % x == 0){
			cout << i << " ";
		}
	}
	cout << endl;
}

void imprimirDivisor(){
	int n;
	cout << "\tEx7-Lista 2" << endl;
	cout << "Digite um numero: ";
	cin >> n;
	for( int i = 1; i <= n; i++){
		if(n % i == 0){
			cout << i << " ";
		}
	}
	cout << endl;
}

void imprimirFatorial(){
	int n;
	cout << "\tExFatorial-Lista 2" << endl;
	cout << "Digite um numero inteiro: ";
	cin >> n;
	if(n < 0){
		cout << "Não Existe o fatorial" << endl;
	}else{
		long long fat = 1;
		for (int i = 1; i <= n; i++){
			fat = fat * i;
		}
		cout << n << "! = " << fat << endl;
	}
	cout << endl;
}

int main (){
	//imprimirTabuadaMultiplos();
	//imprimirIntervalo();
	//imprimirMultiIntervalos();
	//imprimirDivisor();
	imprimirFatorial();

	
	return 0;
}
