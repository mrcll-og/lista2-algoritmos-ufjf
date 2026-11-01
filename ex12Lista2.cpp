#include <iostream>
using namespace std;

int main(){
	int num;
	int qtdPares = 0, qtdImpares = 0, totalGeral = 0;
	int somaPares = 0, somaGeral = 0;
	cout << "Digite uma sequencia de numeros positivos (0 para encerrar): ";
	cin >> num;
	while(num!=0){
		totalGeral++;
		somaGeral+=num;
		if(num % 2 == 0){
			qtdPares++;
			somaPares += num;
		}else{
			qtdImpares++;
		}
		cin >> num;
	}
	if(totalGeral > 0){
		float mediaGeral = (float)somaGeral / totalGeral;
		cout << "Quantidade de numeros pares: " << qtdPares << endl;
		cout << "Quantidade de numeros impares: " << qtdImpares << endl;
		if(qtdPares > 0){
			float mediaPares = (float)somaPares / qtdPares;
			cout << "Media dos valores pares: " << mediaPares << endl;
		}else{
			cout << "Nenhum numero par foi digitado." << endl;
		}
		cout << "Media geral dos numeros: " << mediaGeral << endl;
	}else{
		cout << "Nenhum numero valido foi digitado." << endl;
	}
	return 0;
}
