   // Lista dinâmica duplamente encadeada
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

int cont;

struct no
{
	int valor; //conteudo
	no *proximo;  //aponta para proximo
	no *anterior; //aponta para anterior
};
struct no *cabeca;

void inserirNoInicio(int valor)
{
	no *novo;
	novo = (no *)malloc(sizeof(no));
	novo->valor = valor;
	if (cabeca == NULL)
	{                   //o anterior ao valor inserido aponta para null e o proximo tbm, e o novo valor se torna o cabeca/inicio 
		novo-> anterior = NULL; 
		novo->proximo = NULL;
		cabeca = novo;    
		cont= cont+1;      
	}
	else 
	{
		cabeca->anterior = novo; //coloca valor no inicio
		novo->anterior = NULL;   //valor novo aponta null para anterior
		novo-> proximo = cabeca; //o valor inserido aponta para a antiga cabeca como proximo
		cabeca = novo;           //novo valor é o cabeca
	}
	printf("\nO valor [%d] inserido com successo!", novo->valor);
	getch();
	system("cls");
}

void mostraLista()
{
	no *aux;
	aux = cabeca; //tem que usar auxiliar par anão perder o inicio da lista
	while(aux != NULL)
	{
		printf(" %d,",aux->valor);
		aux = aux->proximo;
	}
	printf("\n\nLista exibida com successo!");
	getch();
	system("cls");
}

void mostraListaInversa()
{
	no *aux = cabeca;
	
	if(aux != NULL)
	{
		while(aux->proximo != NULL)
		{
			aux = aux->proximo;
		}
		do
		{
			printf(" %d,", aux->valor);
			aux = aux->anterior;
		}
		while(aux != NULL); //chegou no primeiro elemento, não precisa exibir mais	
	}
	else
	{
		printf("\nLista vazia!");
	}
	printf("\n\nLista exibida com successo!");
	getch();
	system("cls");
}

void inserirNoFim(int valor)
{
	no *novo;
	no *aux = cabeca;
	
	novo = (no *)malloc(sizeof(no));
	novo->valor = valor;
	
	if(aux != NULL)
	{
		while(aux->proximo != NULL)
		{
			aux = aux->proximo;
		}
		aux->proximo = novo; //colocando valor no final
		novo->proximo = NULL; //proximo ao novo valor é NULL
		novo->anterior = aux ;  //e o anterior vai ser o auxiliar que era o ultimo antes de inserir o novo valor
	}
	else //lista vazia:
	{
		cabeca = novo;
		novo->proximo= NULL;
		novo->anterior = NULL;
	}
	cont= cont+1;    
	printf("\nO valor [%d] inserido com successo!", novo->valor);
	getch();
	system("cls");	
}

void inserirElementoPosicao(int valor)
{
	printf("\nDigite o elemento que será inserido na posição desejada: ");
	scanf("%d", &valor);
	no *novo; *aux = cabeca;
	novo = (no *)malloc(sizeof(no));
	novo->valor = valor;
	if (cabeca == NULL)
	{                   //o anterior ao valor inserido aponta para null e o proximo tbm, e o novo valor se torna o cabeca/inicio 
		novo-> anterior = NULL; 
		novo->proximo = NULL;
		cabeca = novo;          
	}
	else if(posicao == 1)
	{
		novo-> anterior = NULL; 
		novo->proximo = NULL;
		cabeca = novo; 
	}
	else if(posicao >= cont+1)
	{
		
	}
	{
		cabeca->anterior = novo; //coloca valor no inicio
		novo->anterior = NULL;   //valor novo aponta null para anterior
		novo-> proximo = cabeca; //o valor inserido aponta para a antiga cabeca como proximo
		cabeca = novo;           //novo valor é o cabeca
	}
	//else
	//{
		
	//}
	printf("\nO valor [%d] inserido com successo!", novo->valor);
	getch();
	system("cls");
	
	
}

void tamanhoLista()
{
	no *aux = cabeca;
	int contador=0;
	//for (int i=0; aux != NULL; i++)
	if (aux!= NULL)
	{
		while(aux != NULL)
		{
		aux = aux->proximo;
		contador++;
		}
		printf("\nA lista possui %d elementos", contador);
	}
	else
	{
		printf("A lista está vazia!");
	}
	getch();
	system("cls");
	
}


main()
{
	setlocale(LC_ALL,"Portuguese");
	int op, valor, posicao;
	
	do 
	{
		printf("--Digite 0 para sair-- \n");
		printf("\nDigite 1 para inserir no início ");
		printf("\nDigite 2 para mostrar a lista");
		printf("\nDigite 3 para exibir a lista ao contrário");
		printf("\nDigite 4 para inserir no final da lista");
		printf("\nDigite 5 para escolher em que posição o elemento será inserido. [%d]", cont+1);//+1 pq o usuario não entende posição zero
		printf("\nDigite 6 para verificar quantos elementos a lista possui");
		printf("\n\nEscolha sua opção: ");
		scanf("%d", &op);
		switch(op)
		{
			case 1:
				printf("\nDigite o elemento que será inserido no início: ");
				scanf("%d", &valor);
				inserirNoInicio(valor);
				break;
			case 2: 
				printf("\n\t--Lista--\n");
				mostraLista();
				break;
			case 3:
				printf("\n\t--Lista--\n");
				mostraListaInversa();
				break;
			case 4:
				printf("\nDigite o elemento que será inserido no final: ");
				scanf("%d", &valor);
				inserirNoFim(valor);
				break;
			case 5: 
				printf("Em qual posição será inserido o elemento?: ");
				scanf("%d", &valor);
				if(valor > cont){
					printf("\nO valor do elemento é maior do que a lista! ");
					getch();
					system("cls");
				}
				else{
					inserirElementoPosicao(valor);
				}
				
				break;
			case 6:
				tamanhoLista();
				break;
			default:
				printf("\nOpção invalida!") ;
				break;
		}
		
	}while(op != 0);
	printf("\n-----------Programa encerrado-----------");
}
