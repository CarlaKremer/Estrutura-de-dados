/*Escreva um algoritmo que leia a dist�ncia percorrida por um autom�vel e o consumo de
combust�vel em litros e mostre na tela o consumo em quil�metros por litro do
autom�vel.*/
#include <stdio.h>
#include <conio.h>
main ()
{
	int distancia, consumoComb, consKm;
	
	printf("Informe a dist�ncia percorrida: ");
	scanf("%d", &distancia);
	
	printf("Informe o consumo de combustivel: ");
	scanf("%d", &consumoComb);
	
	consKm = distancia/consumoComb;
	printf("O consumo em quilometros por litro foi de: %d(km/L", consKm);
	getche();
}
