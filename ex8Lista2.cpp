//8. Faça uma função que recebe um valor N inteiro e que, se N for positivo,
//retorna o fatorial de N(N!). Se não for possivel calcular o fatorial,
//a função deve imprimir uma mensagem e retornar o valor -1.

#include <iostream>
using namespace std;

int calcularFatorial(int n){
	if(n < 0)
		return -1;
	int fat = 1;
	for( int i = 1; i <= n; i++)
		fat = fat * i;
	return fat;
}

//função principal

int main(){
	int num;
	cout << "Digite um numero inteiro: ";
	cin >> num;
	int resultado = calcularFatorial(num);
	if(resultado != -1)
		cout << num << "!" << " = "
			 << resultado << endl;
	return 0;
}
