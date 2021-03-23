/*Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual
de reajuste. Calcular e escrever o valor do novo salário. O cálculo deve ser feito através
de uma função.*/
#include <stdio.h>
#include <conio.h>
#include <locale>
float calculo(float s, float p){
	p= (s*p)/100;
	return p+s ;
	
}
main(){
	setlocale(LC_ALL, "Portuguese");
	float salario, percentual, novoSal;
	
	printf("Informe o salário: ");
	scanf("%f", &salario);
	
	printf("Informe percentual de reajuste: ");
	scanf("%f", &percentual); 
	
	novoSal = calculo(salario,percentual);
	
	printf("O novo salário será: %.2f ", novoSal);
}
