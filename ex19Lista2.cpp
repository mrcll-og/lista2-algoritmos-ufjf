/* 19. Escreva uma função que, dados dois numeros inteiros n1 e n2, retorna a soma
dos numeros inteiros que existem no intervalo fechado entre n1 e n2. A função deve 
funcionar inclusive  se o valor de n2 for menor que n1.*/

#include <iostream>
using namespace std;

int somaIntervalo (int n1, int n2){
	if(n1 > n2){
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}

	int soma = 0;

	for (int i = n1; i <= n2; i++) soma += i;

	return soma;
}

int main(){
	int num1, num2;

	cout << "Digite o primeiro numero: ";
	cin >> num1;

	cout << "Digite o segundo numero: ";
	cin >> num2;

	int totalSoma = somaIntervalo(num1, num2);

	cout << "A soma dos numeros no intervalo eh: " << totalSoma << endl;

	return 0;
}
