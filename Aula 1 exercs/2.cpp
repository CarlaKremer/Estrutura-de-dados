/*Escreva um algoritmo que dado um valor, retorne a saída do valor com um
acréscimo de 20%.*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float valor, r;
	
	printf("Informe o valor: ");
	scanf("%f", &valor);
	r = valor * 1.20;
	printf("O valor com acrescimo de é: %.2f ",r);
}
