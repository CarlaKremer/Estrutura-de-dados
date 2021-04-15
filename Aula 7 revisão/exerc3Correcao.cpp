#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

struct no
{
	float valor; //peso
	no *prox;
};
no *p, *r, *q = NULL, *inicio = NULL;

void inserirPeso()
{
	r = (no*)malloc(sizeof(no));
	printf("Digite o peso: ");
	scanf("%f", &r->valor);
	
	//r->prox = NULL;
	p=inicio;
	
	if (inicio == NULL)
	{
		r->	prox = NULL;
		inicio = r;
		return;
	}	
	
	q= NULL;
	while( p!= NULL)
	{
		if (p->valor < r->valor)
		{
			q = p;
			p=p->prox;
		}else 
		{
			if (q != NULL)
			{
				r->prox = p;
				q->prox = r;
				return;
			}
			//novo primeiro elemento
			r->prox = p;
			inicio = r;
		}
		
	}
	//final da lista
	q->prox =r;
	
	getch();
	system("cls");
}


void exibir()
{
	p = inicio;
	while (p!= NULL)
	{
		printf("%f - ", p->valor);
		p = p->prox;
	}
}

main()
{
	setlocale(LC_ALL, "Portuguese");
    int op;
    bool achou;
    
    do
    {
        printf("Digite peso");
        printf("\nDigite 1 para digitar peso");
        printf("\nDigite 2 para exibir lista");
        printf("\nEntre com a opcao desejada:");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            inserirPeso();
            break;
        case 2:
           	exibir();
            break;
        default:
            printf("codigo invalido!");
            break;
        }
    } while (op != 0);
}
