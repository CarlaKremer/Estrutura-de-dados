#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

struct no
{
    int valor;
    no *prox;
};
 no *p, *q, *inicio;

void inserirDados()
{


    //insercao primiero no
    p = (no *)malloc(sizeof(no));
    p->valor = 1;
    p->prox = NULL;
    inicio = p;
    q = p;
    //printf("Inseriu\n");

    //insercao segundo no
    p = (no *)malloc(sizeof(no));
    p->valor = 2;
    p->prox = NULL;
    q->prox = p;
    q = p;

    //insercao terceiro no
    p = (no *)malloc(sizeof(no));
    p->valor = 3;
    p->prox = NULL;
    q->prox = p;
    q = p;

    //insercao quarto no
    p = (no *)malloc(sizeof(no));
    p->valor = 4;
    p->prox = NULL;
    q->prox = p;
    q = p;


}

void removeInicio()
{
    p = inicio;
    
    inicio = p->prox;
    printf("\nelemento [%d] excluido", p->valor);
    free(p); 

}

void removeFim()
{
    p = inicio;

	while(p!=NULL)
	{
		if (p->prox == NULL)
    	{
        	q->prox = p->prox;
            free(p);
            p = NULL;
   		}
   		else
   		{
   			q=p;
            p=p->prox;
		}
	}
    
}

void exibirLista()
{
    p = inicio;
	printf("\nExibindo: ");
    while (p != NULL)
    {
        printf("%d, ", p->valor);
        p= p->prox;
    }
}

main()
{
	
	inserirDados();
    exibirLista();
    removeInicio();
    exibirLista();
    removeFim();
    exibirLista();
}
