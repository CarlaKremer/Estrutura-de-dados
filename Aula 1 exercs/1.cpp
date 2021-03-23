/*Escreva um algoritmo que leia a distância percorrida por um automóvel e o consumo de
combustível em litros e mostre na tela o consumo em quilômetros por litro do
automóvel.*/
#include <stdio.h>
#include <conio.h>
main ()
{
	int distancia, consumoComb, consKm;
	
	printf("Informe a distância percorrida: ");
	scanf("%d", &distancia);
	
	printf("Informe o consumo de combustivel: ");
	scanf("%d", &consumoComb);
	
	consKm = distancia/consumoComb;
	printf("O consumo em quilometros por litro foi de: %d(km/L", consKm);
	getche();
}
