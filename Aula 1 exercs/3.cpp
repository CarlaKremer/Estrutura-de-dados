/*Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e
escrever a área do retângulo.
• Formula: Aérea = base * altura */
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
	
	printf("A área deste retângulo é: %.2f ", base*altura);
}
