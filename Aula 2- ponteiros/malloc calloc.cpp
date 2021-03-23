#include <stdio.h>
#include <stdlib.h>
main(){
	int n, i,*v;
	printf("Qual o tamanho do vetor?: \n");
	scanf("%d", &n);
	
	v = (int*)malloc(n * sizeof(int));
	//v = (int*)calloc(n, sizeof(int));
	
		for (i=0; i<n; i++){
			printf("\n Digite o %d elemento: ", i+1);
			scanf("%d", &v[i]);
		}
		
		for (i=0; i<n; i++){
			printf("\n Valores inseridos v[%d]=%d",i, v[i]);
		}
		
		free(v);
		
		for (i=0; i<n; i++){
			printf("\n Valores inseridos v[%d]=%d",i, v[i]);
		}
}
