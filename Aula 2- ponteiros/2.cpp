#include <stdio.h>
#include <stdlib.h>
main(){
	int *valores;
	int tamvetor;
	
    printf("Entre com o tamanho do vetor:"); 
    scanf("%d", &tamvetor); 
    
    valores = (int *)malloc(tamvetor * sizeof(int));
   
    int i;
	for (i=0; i< tamvetor; i++)
	{
		printf("Entre com um número: ");
		scanf("%d", &valores[i]);
	}
	for (i=0; i< tamvetor; i++)
	{
		printf("valores: ", valores[i]);
	}
	
	free(valores);
	
}
