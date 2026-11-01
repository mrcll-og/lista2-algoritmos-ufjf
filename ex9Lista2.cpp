//9. Elabora uma função que receba como parâmetros dois valores reais a e b.
//A função deve ler uma sequencia de valores reais e imprimir a media aritmetica
//dos valores que pertecerem ao invercalo fechado entre a e b. A sequencia dos valores
//deverá ser encerrada quando or lido um valor negativo.

//Exemplo:

//com entradas a = 7, b = 3 e sequencia = 5 2 9 8 3 1 -2, a função deve imprimir o valor 4

#include <iostream>
using namespace std;

void mediaNoIntervalo(float a, float b){
	float inicio, fim;
	if(a <= b){
		inicio = a;
		fim = b;
	}else{
		inicio = b;
		fim = a;
	}
	float soma = 0.0;
	int cont = 0;
	float num;
	cout << "Digite a sequencia de numeros reais"
		 << " (numero negativo para sair): " << endl;
	cin >> num;
	while(num >= 0){
		if(num >= inicio && num <= fim){
			soma += num;
			cont ++;
		}
		cin >> num;
	}
	if(cont > 0)
		cout << soma/cont << endl;
}

//função principal

int main(){
	float a,b;
	cout << "Digite os limetes a e b: ";
	cin >> a >> b;
	mediaNoIntervalo(a,b);
	return 0;
}
