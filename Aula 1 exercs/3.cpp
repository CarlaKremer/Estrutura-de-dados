/*Escreva um algoritmo para ler as dimens�es de um ret�ngulo (base e altura), calcular e
escrever a �rea do ret�ngulo.
� Formula: A�rea = base * altura */
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	
	float base,altura;
	
	printf("Informe a base: ");
	scanf("%f", &base);
	
	printf("Informe a altura: ");
	scanf("%f", &altura);
	
	printf("A �rea deste ret�ngulo �: %.2f ", base*altura);
}
