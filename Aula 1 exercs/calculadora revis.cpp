#include <stdio.h>
#include <conio.h>
#include <locale.h>

void calculadora(int num1, int num2, int op){

	switch(op){
		case 'a':
			printf("\n\tO resultado �: %d",num1+num2);
			break;
		case 'b':
			printf("\n\tO resultado �:%d",num1-num2);
			break;
		case 'c':
			printf("\n\tO resultado �:%d",num1*num2);
			break;
		case 'd':
			printf("\n\tO resultado �: %d",num1/num2);
			break;
	}
}
char menu(char op){
	fflush(stdin);
	printf("\t-------------MENU-------------");
	printf("\n\ta - Soma");
	printf("\n\tb - Subtra��o");
	printf("\n\tc - Multiplica��o");
	printf("\n\td - Divis�o");
	printf("\n\n\tEntre com a letra corresponde a op�ao escolhida: ");
	op = getchar();
	return op;
}
main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	char op;
	
	printf("Entre com o primeiro n�mero: ");
	scanf("%d",&num1);
	
	printf("Entre com o segundo n�mero:");
	scanf("%d",&num2);
	
	op = menu(op);
	calculadora( num1, num2, op);
	
	getche();
}
