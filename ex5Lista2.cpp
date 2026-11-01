//5. Escreve um algoritmo que imprima todos os numeros de 1000 a 1999
//que divididos por 11 dão resto igual a 5

#include <iostream>
using namespace std;

int main(){
	for(int i = 1000; i <= 1999; i++)
		if(i % 11 == 5)
			cout << i << endl;
	return 0;
}
