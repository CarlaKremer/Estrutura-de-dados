/*. Escreva um programa que dado dois números o usuário possa escolher efetuar a:
a. Soma; ou
b. Subtração; ou
c. Divisão; ou
d. Multiplicação.*/
#include <stdio.h>
#include <conio.h>
#include <locale>
main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, resultado;
	char op;
	printf("Informe o primeiro número: ");
	scanf("%f", &num1);
	
	printf("Informe o segundo número: ");
	scanf("%f", &num2);
	
	fflush(stdin);
	printf("\na- Soma");
	printf("\nb- Subtração");
	printf("\nc- Divisão");
	printf("\nd- Multiplicação-");
	printf("\nEscolha uma opção: ");
	scanf("%c",&op);
	 
	switch(op){	
	case 'a':
		printf("O resultado é:%.2f",num1+num2);
		break;
	case 'b':
		printf("O resultado é:%.2f",num1-num2);
		break;
	case 'c':
		printf("O resultado é:%.2f",num1*num2);
		break;
	case 'd':
		printf("O resultado é:%.2f",num1/num2) ;
		break;
	}
	
}
