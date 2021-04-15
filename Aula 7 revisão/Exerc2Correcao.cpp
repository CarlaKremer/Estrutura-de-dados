#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

struct no
{
    int valor;
    no *prox;
};
no *p, *q, *inicio;

void inserir()
{
    //int v;
     p = (no *)malloc(sizeof(no));
    printf("\nDigite o novo valor que sera a lista");
    scanf("%d", &p->valor);

    p->prox = NULL;
    
    if(inicio == NULL)
    	inicio = p;
    if(q != NULL)
    	q->prox = p;
    	
    q=p;
    
    getch();
    system("cls");
}

bool consultar()
{
	int v ;
	printf("\ndigite o valor que deseja cosultar");
	scanf ("%d", &v);
	bool achou = false;
	
	p= inicio;
	while( p!= NULL && !achou)
	{
		if (p->valor == v)
			return true;
		p = p->prox;
	}
	return false;
}

void exibir()
{
	p = inicio;
	while( p!= NULL)
	{
		printf("%d, ", &p);
		p = p->prox;
	}
	
	getch();
    system("cls");
}

void remover()
{
	int v, achou = 0;
	p = inicio;
	q = NULL;
	
	printf("digite o valor que deseja excluir: ");
	scanf("%d", &v);
	
	while(p != NULL && achou == 0)
	{
		if(p->valor != v)
		{
			q=p;
			p=p->prox;
		}
		else
		{//encontro
			if(q == NULL)
			{//primeiro no
				inicio = p->prox;
				free (p);	
			}	
			else
			{//no meio ou final
				q->prox = 	p->prox;
				free (p);
			}
			achou++;
		}
	}
	
	getch();
    system("cls");
}

main()
{
    setlocale(LC_ALL, "Portuguese");
    int op;
    bool achou;
    
    do
    {
        printf("Digite 0 para sair \n");
        printf("\nDigite 1 para inserir um valor a lista");
        printf("\nDigite 2 para Consultar um valor");
        printf("\nDigite 3 para exibir a lista");
        printf("\nDigite 4 para remover um valor");
        printf("\nEntre com a opcao desejada:");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            inserir();
            break;
        case 2:
            achou = consultar();
            if(achou)
            	printf("\n Valor encontrado!");
            else
            	printf("\nValor não encontrado");
            break;
        case 3:
            exibir();
            break;
        case 4:
        	remover();
            break;
        default:
            printf("codigo invalido!");
            break;
        }
    } while (op != 0);
}
