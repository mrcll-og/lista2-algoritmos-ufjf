#include <iostream>
using namespace std;

int analisaSequencia(){
	float num;
	float soma = 0.0;
	int contPositivos = 0;
	int contNegativos = 0;
	int total = 0;
	cout << "Digite uma sequencia de numeros (0 para encerrar): " << endl;
	cin >> num;
	while(num != 0){
		soma += num;
		total++;
		if(num > 0){
			contPositivos++;
		}else if(num < 0){
			contNegativos++;
		}
		cin >> num;
	}
	if(total > 0){
		float media = soma/total;
		float percPositivos = (contPositivos * 100.0) / total;
		float percNegativos = (contNegativos * 100.0) / total;
		cout << "Media aritimetica: " << media << endl;
		cout << "Quantidade de positivos: " << contPositivos << endl;
		cout << "Quantidade de Negativos: " << contNegativos << endl;
		cout << "Percentual de positivos: " << percPositivos << "%" << endl;
		cout << "Percentual de Negativos: " << percNegativos << "%" << endl;
	} else {
		cout << "Nenhum numero valido foi digitado." << endl;
	}
	return total;
}

int main(){
	int qtdValores = analisaSequencia();
	cout << "Total de numeros lidos: " << qtdValores << endl;
	return 0;
}
