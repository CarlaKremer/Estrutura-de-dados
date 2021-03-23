/*Crie um programa para conversão cambial entre Reais e Dólares. Considere o valor do
dólar $5,23. Leia um valor em reais e mostre o correspondente em dólar. A conversão
deve ser feita através de uma funçã*/
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
	printf("O valor em dólar é: %.f", dolar);
	
}
