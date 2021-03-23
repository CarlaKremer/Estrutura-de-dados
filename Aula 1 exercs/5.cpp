/*Escreva um algoritmo que lê do usuário a medida do raio de um círculo em centímetros
e mostra o diâmetro, a circunferência e a área do círculo. Utilize o valor 3,14159 para p.
Utilize as seguintes fórmulas (r é o raio):
• diâmetro = 2r
• circunferência = 2pr
• área = pr
Faça uma função para cada cálculo*/
#include <stdio.h>
#include <conio.h>
#include <locale>
float calcDiam (float r){
	return (2*r);
}
float calcCirc (float r, float p){
	return (2*p*r);
}
float calcArea(float r, float p){
	return (p*r);
}
main(){
	setlocale(LC_ALL, "Portuguese");
	float r,diametro,circunferencia,area;
	float p=3.14159;
	printf("Informe o raio do círculo em cm: ");
	scanf("%f",&r);
	
	diametro= calcDiam(r);
	circunferencia= calcCirc(r,p);
	area= calcArea(r,p);

	printf("Diametro: %.2f \n Circunferencia: %.2f \n Area: %.2f",diametro,circunferencia,area );
	
}
