// Lista dinùmica duplamente encadeada
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

int cont;

struct no
{
	int valor;	  //conteudo
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
	{ //o anterior ao valor inserido aponta para null e o proximo tbm, e o novo valor se torna o cabeca/inicio
		novo->anterior = NULL;
		novo->proximo = NULL;
		cabeca = novo;
		//cont = cont + 1;
	}
	else
	{
		cabeca->anterior = novo; //coloca valor no inicio
		novo->anterior = NULL;	 //valor novo aponta null para anterior
		novo->proximo = cabeca;	 //o valor inserido aponta para a antiga cabeca como proximo
		cabeca = novo;			 //novo valor È o cabeca
	}
	cont = cont + 1;
	printf("\nO valor [%d] inserido com successo!", novo->valor);
	getch();
	system("cls");
}

void mostraLista()
{
	no *aux;
	aux = cabeca; //tem que usar auxiliar para n„o perder o inicio da lista
	while (aux != NULL)
	{
		printf(" %d,", aux->valor);
		aux = aux->proximo;
	}
	printf("\n\nLista exibida com successo!");
	getch();
	system("cls");
}

void mostraListaInversa()
{
	no *aux = cabeca;

	if (aux != NULL)
	{
		while (aux->proximo != NULL)
		{
			aux = aux->proximo;
		}
		do
		{
			printf(" %d,", aux->valor);
			aux = aux->anterior;
		} while (aux != NULL); //chegou no primeiro elemento, n„o precisa exibir mais
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

	if (aux != NULL)
	{
		while (aux->proximo != NULL)
		{
			aux = aux->proximo;
		}
		aux->proximo = novo;  //colocando valor no final
		novo->proximo = NULL; //proximo ao novo valor È NULL
		novo->anterior = aux; //e o anterior vai ser o auxiliar que era o ultimo antes de inserir o novo valor
	}
	else //lista vazia:
	{
		cabeca = novo;
		novo->proximo = NULL;
		novo->anterior = NULL;
	}
	cont = cont + 1;
	printf("\nO valor [%d] foi inserido com successo!", novo->valor);
	getch();
	system("cls");
}

void inserirElementoPosicao(int posicao)
{
	no *novo, *aux = cabeca, *aux2;
	int valor;

	printf("\nDigite o elemento que ser· inserido: ");
	scanf("%d", &valor);

	novo = (no *)malloc(sizeof(no));
	novo->valor = valor;

	if (cabeca = NULL)
	{
		novo->anterior = NULL;
		novo->proximo = NULL;
		cabeca = novo;
	}
	else if (posicao == 1) //se for o primeiro elemento
	{
		cabeca->anterior = novo; //anterior a cabeca recebe novo
		novo->anterior = NULL;	 //anterior a novo È NULL
		novo->proximo = cabeca;	 //proximo a novo È
	}
	else if (posicao == cont + 1) //se o elemento for o ˙ltimo
	{
		while (aux->proximo != NULL) //enquanto n„o chegar no final
		{
			aux = aux->proximo; // vai passando pro proximo
		}
		aux->proximo = novo;  //aux proximo È novo
		novo->proximo = NULL; //proximo È null pois final
		novo->anterior = aux; //anterior È o È aux
	}
	else
	{ //caso seja alguma posiÁ„o no meio
		printf("\nPosiÁ„a que ser· inserida: %d", posicao);
		for (int i = 1; i < posicao; i++)
		{
			aux = aux->proximo; //vai passando atÈ chegar na posiÁ„o
		}

		aux2 = aux->anterior;  //aux2 recebe o anterior de aux
		novo->proximo = aux;   //proximo recebe aux
		aux->anterior = novo;  //anterior aux recebe o novo
		novo->anterior = aux2; //novo anterior recebe o aux2 que era o anterior do aux
		aux2->proximo = novo;  //aux2 proximo recebe novo
	}
	cont++;
	printf("\nElemento %d foi inserido com sucesso", novo->valor);
	getch();
	system("cls");
}

void tamanhoLista()
{
	no *aux = cabeca;
	int contador = 0;
	//for (int i=0; aux != NULL; i++)
	if (aux != NULL)
	{
		while (aux != NULL)
		{
			aux = aux->proximo;
			contador++;
		}
		printf("\nA lista possui %d elementos", contador);
	}
	else
	{
		printf("A lista est· vazia!");
	}
	getch();
	system("cls");
}

main()
{
	setlocale(LC_ALL, "Portuguese");
	int op, valor, posicao;

	do
	{
		printf("--Digite 0 para sair-- \n");
		printf("\nDigite 1 para inserir no inÌcio ");
		printf("\nDigite 2 para mostrar a lista");
		printf("\nDigite 3 para exibir a lista ao contr·rio");
		printf("\nDigite 4 para inserir no final da lista");
		printf("\nDigite 5 para escolher em que posiÁ„oo o elemento ser· inserido. [%d]", cont + 1); //+1 pq o usuario n„o entende posiùùo zero
		printf("\nDigite 6 para verificar quantos elementos a lista possui");
		printf("\n\nEscolha sua opÁ„o: ");
		scanf("%d", &op);
		switch (op)
		{
		case 1:
			printf("\nDigite o elemento que ser· inserido no inÌcio: ");
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
			printf("\nDigite o elemento que ser· inserido no final: ");
			scanf("%d", &valor);
			inserirNoFim(valor);
			break;
		case 5:
			printf("\nEm qual posiÁ„o ser· inserido o elemento?: ");
			scanf("%d", &posicao);
			inserirElementoPosicao(posicao);
			break;
		case 6:
			tamanhoLista();
			break;
		case 0:
			break;
		default:
			printf("\nOpÁ„o inv·lida!");
			break;
		}

	} while (op != 0);
	printf("\n-----------Programa encerrado-----------");
}
