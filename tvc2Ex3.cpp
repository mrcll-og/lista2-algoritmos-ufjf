/*
Questão 3 (45pts). Lúcia precisa calcular os salários de seus funcionários considerando as horas extras trabalhadas.
Como são muitos funcionários, Lúcia optou por desenvolver um programa para ajudá-la nos cálculos. O programa
deve mostrar os valores que Lúcia deve pagar a cada um dos funcionários, de acordo com o total informado de horas
extras trabalhadas.

a) Faça uma função que receba o salário base e o valor da hora extra como parâmetros. Para cada funcionário,
a função deve ler do teclado o número de horas extras trabalhadas, calcular o salário e exibi-lo na tela. A
leitura será finalizada quando o usuário digitar um valor negativo para o número de horas extras.

b) Faça um programa principal que solicite ao usuário que digite o salário base e o valor da hora extra. Chame
a função criada no item anterior para imprimir os salários dos funcionários, passando como parâmetros os
dois valores lidos.
*/

#include <iostream>
#include <iomanip> // Necessário para formatar as casas decimais (setprecision)

using namespace std;

// a) Função que recebe o salário base e o valor da hora extra
void calcularSalarios(float salarioBase, float valorHoraExtra) {
    int horasExtras;
    
    // Lê a primeira quantidade de horas extras
    cin >> horasExtras;
    
    // O laço continua enquanto o valor digitado não for negativo
    while (horasExtras >= 0) {
        float salarioFinal = salarioBase + (horasExtras * valorHoraExtra);
        
        // Formata a saída para mostrar sempre 2 casas decimais, como no exemplo
        cout << fixed << setprecision(2);
        cout << "Salario: R$" << salarioFinal << endl;
        
        // Lê a próxima quantidade para a próxima iteração do laço
        cin >> horasExtras;
    }
}

// b) Programa principal (main)
int main() {
    float salarioBase, valorHoraExtra;
    
    // Solicita ao usuário o salário base e o valor da hora extra
    cin >> salarioBase >> valorHoraExtra;
    
    // Chama a função passando os valores lidos
    calcularSalarios(salarioBase, valorHoraExtra);
    
    return 0;
}
