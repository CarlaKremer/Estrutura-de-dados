/*Escreva um algoritmo para ler o sal�rio mensal atual de um funcion�rio e o percentual
de reajuste. Calcular e escrever o valor do novo sal�rio. O c�lculo deve ser feito atrav�s
de uma fun��o.*/
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
	
	printf("Informe o sal�rio: ");
	scanf("%f", &salario);
	
	printf("Informe percentual de reajuste: ");
	scanf("%f", &percentual); 
	
	novoSal = calculo(salario,percentual);
	
	printf("O novo sal�rio ser�: %.2f ", novoSal);
}
