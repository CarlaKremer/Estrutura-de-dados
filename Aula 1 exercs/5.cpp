/*Escreva um algoritmo que l� do usu�rio a medida do raio de um c�rculo em cent�metros
e mostra o di�metro, a circunfer�ncia e a �rea do c�rculo. Utilize o valor 3,14159 para p.
Utilize as seguintes f�rmulas (r � o raio):
� di�metro = 2r
� circunfer�ncia = 2pr
� �rea = pr
Fa�a uma fun��o para cada c�lculo*/
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
	printf("Informe o raio do c�rculo em cm: ");
	scanf("%f",&r);
	
	diametro= calcDiam(r);
	circunferencia= calcCirc(r,p);
	area= calcArea(r,p);

	printf("Diametro: %.2f \n Circunferencia: %.2f \n Area: %.2f",diametro,circunferencia,area );
	
}
