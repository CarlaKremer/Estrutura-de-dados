/*Escreva um algoritmo para ler o número total de eleitores de um município, o número
de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um
representa em relação ao total de eleitores.
*/
#include <stdio.h>
#include <conio.h>
#include <locale>
int brancos(int e,int b){
	return (100*b)/e;
}
int nulos(int e,int n){
	return (100*n)/e;
}
int validos(int e,int v){
	return (100*v)/e;
}
main(){
	setlocale(LC_ALL, "Portuguese");
	int eleitores, vBrancos,vNulos, vValidos, percentual, percentb, percentn, percentv;
	
	printf("Informe o número total de eleitores: ");
	scanf("%d", &eleitores);
	
	printf("Informe o número de votos brancos: ");
	scanf("%d", &vBrancos);
	
	printf("Informe o número de votos nulos: ");
	scanf("%d", &vNulos);
	
	printf("Informe o número de votos válidos: ");
	scanf("%d", &vValidos);
	
	percentb= brancos(eleitores,vBrancos);
	percentn= nulos(eleitores, vNulos);
	percentv= validos(eleitores, vValidos);
	
	printf("O percentual de votos nulos foi de:%d",percentn);
	printf("\nO percentual de votos brancos foi de:%d ",percentb);
	printf("\nO percentual de votos válidos foi de:%d ",percentv);
	
}
