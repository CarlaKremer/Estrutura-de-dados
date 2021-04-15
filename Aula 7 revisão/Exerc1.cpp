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
//no *cabeca;
 no *p, *q, *inicio;

void inserirDados()
{
    no *p, *q, *inicio; 

    //insercao primiero no
    p = (no *)malloc(sizeof(no));
    p->valor = 1;
    p->prox = NULL;
    inicio = p;
    q = p;

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

    /*no *aux = cabeca;
    int aux2;
    no *novo;
    novo = (no *)malloc(sizeof(no));
    novo->prox = NULL;
    for (int i=0; i<=4; i++ )
    {   aux2 = aux->valor[i];
        while(aux -> prox != NULL)
        {
            aux = aux proximo;
        }
       
    }*/
}

void removeInicio()
{
    no *aux = cabeca;

    cabeca = cabeca->prox;
    printf("elemento [%d] excluído", aux->valor);
    free(aux);
}

void removeFim()
{
    no *aux = cabeca;

    while (aux->prox != NULL)
    {
        aux = aux->prox;
    }
    aux = aux->prox;
    free(aux);
}

void exibirLista()
{
    no *aux = cabeca;

    while (aux != NULL)
    {
        printf("%d, ", aux->valor);
        aux = aux->prox;
    }
}

main()
{
    exibirLista();
    removeInicio();
    exibirLista();
    removeFim();
}
