/*. Escreva um programa que dado dois n�meros o usu�rio possa escolher efetuar a:
a. Soma; ou
b. Subtra��o; ou
c. Divis�o; ou
d. Multiplica��o.*/
#include <stdio.h>
#include <conio.h>
#include <locale>
main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, resultado;
	char op;
	printf("Informe o primeiro n�mero: ");
	scanf("%f", &num1);
	
	printf("Informe o segundo n�mero: ");
	scanf("%f", &num2);
	
	fflush(stdin);
	printf("\na- Soma");
	printf("\nb- Subtra��o");
	printf("\nc- Divis�o");
	printf("\nd- Multiplica��o-");
	printf("\nEscolha uma op��o: ");
	scanf("%c",&op);
	 
	switch(op){	
	case 'a':
		printf("O resultado �:%.2f",num1+num2);
		break;
	case 'b':
		printf("O resultado �:%.2f",num1-num2);
		break;
	case 'c':
		printf("O resultado �:%.2f",num1*num2);
		break;
	case 'd':
		printf("O resultado �:%.2f",num1/num2) ;
		break;
	}
	
}
