/*Crie um programa para convers�o cambial entre Reais e D�lares. Considere o valor do
d�lar $5,23. Leia um valor em reais e mostre o correspondente em d�lar. A convers�o
deve ser feita atrav�s de uma fun��*/
#include <stdio.h>
#include <conio.h>
#include <locale>
float conversao(float reais){
	return reais * 5.23;
}

main(){
	setlocale(LC_ALL, "Portuguese");
	float reais, dolar;
	
	printf("Informe o valor em Reais: ");
	scanf("%f", &reais);
	dolar = conversao (reais);
	printf("O valor em d�lar �: %.f", dolar);
	
}
