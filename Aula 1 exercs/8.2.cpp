/*Escreva um algoritmo para ler o n�mero total de eleitores de um munic�pio, o n�mero
de votos brancos, nulos e v�lidos. Calcular e escrever o percentual que cada um
representa em rela��o ao total de eleitores.
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
	
	printf("Informe o n�mero total de eleitores: ");
	scanf("%d", &eleitores);
	
	printf("Informe o n�mero de votos brancos: ");
	scanf("%d", &vBrancos);
	
	printf("Informe o n�mero de votos nulos: ");
	scanf("%d", &vNulos);
	
	printf("Informe o n�mero de votos v�lidos: ");
	scanf("%d", &vValidos);
	
	percentb= brancos(eleitores,vBrancos);
	percentn= nulos(eleitores, vNulos);
	percentv= validos(eleitores, vValidos);
	
	printf("O percentual de votos nulos foi de:%d",percentn);
	printf("\nO percentual de votos brancos foi de:%d ",percentb);
	printf("\nO percentual de votos v�lidos foi de:%d ",percentv);
	
}
