/*6. Faça um algoritmo que lê uma temperatura em Fahrenheit e calcula a temperatura
correspondente em Celsius. Ao final o programa deve exibir as duas temperaturas.
• Usar a fórmula: C = (5 * (F-32) / 9)
*/
#include <stdio.h>
#include <conio.h>
#include <locale>
float conversao(float f){
	return (5 * (f-32) / 9);
}
main(){
	setlocale(LC_ALL, "Portuguese");
	
	float fahrenheit, celsius;
	
	printf("Informe a temperatura em Fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	celsius = conversao(fahrenheit);
	printf("A temperatura em celcius é: %.f°", celsius);
	
}
