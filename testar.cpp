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


main()
{
    no *p, *q, *inicio;
    
    
    
    //insercao primiero no
    p = (no*)malloc(sizeof(no));
    p->valor = 1;
    p->prox = NULL;
    inicio = p;
    q = p;

    //insercao segundo no
    p = (no*)malloc(sizeof(no));
    p->valor = 2;
    p->prox = NULL;
    q->prox = p;
    q = p;

     //insercao terceiro no
    p = (no*)malloc(sizeof(no));
    p->valor = 3;
    p->prox = NULL;
    q->prox = p;
    q = p;

     //insercao quarto no
    p = (no*)malloc(sizeof(no));
    p->valor = 4;
    p->prox = NULL;
    q->prox = p;
    q = p;
     
    //exibição após insercao de dados
    p = inicio;
    while (p != NULL)
    {
        printf("%d, ", p->valor);
        p= p->prox;
    }
    
    //remover primeiro
    p = inicio;
    inicio = p->prox;
    free(p);

    //exibição após remocao do primeiro
    p = inicio;
    printf("\nExibicao apos remocao do primeiro: ");
    while (p != NULL)
    {
        printf("%d, ", p->valor);
        p = p->prox;
    }

    p=inicio;
    while( p!= NULL)
    {
        if(p->prox == NULL)
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
     //exibição após remocao do utimo
    p = inicio;
    printf("\nExibicao apos remocao do ultimo: ");
    while (p != NULL)
    {
        printf("%d, ", p->valor);
        p = p->prox;
    }
    
    printf("\nFim");
    getch();
}
