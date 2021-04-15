#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

struct no
{
	int conteudo;
	no *proximo;
};
no *cabeca; //inicio da lista, variavel de controle

void criarListaVazia()
{
	cabeca == NULL;
	printf("A lista foi criada");
	getch();
	system("cls");
}

void inserirNoInicio()
{
	int valor;
	no *novo;
	printf("Digite o novo valor que sera inserido no inicio da lista");
	scanf("%d", &valor);
	novo = (no *)malloc(sizeof(no)); //reserva de espa�o da memoria. "novo" recebe o endere�o o qual foi reservado;
	novo->conteudo = valor;
	if (cabeca == NULL)
	{ //situa��o 1 - Lista est� vazia
		novo->proximo = NULL;
		cabeca = novo;
	}
	else
	{							//a lista ja possui elementos 1 ou mais.
		novo->proximo = cabeca; //setando proximo elemento
		cabeca = novo;			//novo inicio
	}
	printf("\n Elemento inserido com sucesso");
	getch();
	system("cls");
}

void exibirLista()
{
	no *aux;
	aux = cabeca;

	while (aux != NULL)
	{
		printf(" %d ", aux->conteudo);
		aux = aux->proximo;
	}
	getch();
	system("cls");
}

void inserirFinal()
{
	no *aux, *novo;

	aux = cabeca; //auxiliar que vai percorrer a lista
	novo = (no *)malloc(sizeof(no));
	printf("\nDigite o novo valor que sera inserido no inicio da lista");
	scanf("%d", &novo->conteudo);
	novo->proximo = NULL;
	if (aux == NULL)
	{ //lista esta vazia
		cabeca = novo;
	}
	else
	{
		while (aux->proximo != NULL)
		{
			aux = aux->proximo;
		}
		aux->proximo = novo;
	}
	printf("O valor foiinserido ao final da lista");
	getch();
	system("cls");
}

void listaVazia()
{
	if (cabeca == NULL)
	{
		printf("\n A lista esta vazia");
	}
	else
	{
		printf("A lista n?o esta vazia");
	}
	getche();
	system("cls");
}

void tamanhoLista()
{
	int cont = 0;
	no *aux = cabeca;
	for (int i; aux != NULL; i++)
	{
		aux = aux->proximo;
		cont = i;
	}

	printf("a lista possui %d elementos", cont);
	getch();
	system("cls");
}

void primeiroElemento()
{
	if (cabeca != NULL)
	{
		printf("O primeiro elemento da lista e: %d", cabeca->conteudo);
	}
	else
	{
		printf("\n A lista n?o possui elementos");
	}
	getch();
	system("cls");
}

void fimLista()
{
	no *aux = cabeca;
	while (aux != NULL)
	{
		aux = aux->proximo;
	}
	printf("O ultimo elemento da lista ?: %d", aux->conteudo);

	//printf("\n A lista n?o possui elementos");

	getch();
	system("cls");
}

void excluiPrimeiro()
{
	no *aux = cabeca;

	if (cabeca == NULL)
	{
		printf("A lista est? vazia");
	}
	else
	{
		cabeca = cabeca->proximo;
		printf("Elemento excluido com sucesso", aux->conteudo);
		free(aux);
	}
	getch();
	system("cls");
}

main()
{
	int op;
	do
	{
		printf("Digite 0 para sair \n");
		printf("\nDigite 1 para criar uma lista vazia"); //criarListaVazia()
		printf("\nDigite 2 para inserir no inicio da lista");
		printf("\nDigite 3 para exibir a lista");
		printf("\nDigite 4 para inserir no final da lista");
		printf("\nDigite 5 para verificar se a lista esta vazia");
		printf("\nDigite 6 para exibir quantos elementos a lista possui");
		printf("\nDigite 7 para exibir o conteudo do primeiro elemento");
		printf("\nDigite 8 para exibir o conteudo do fim da lista");
		printf("\nDigite 9 para excluir o primeiro elemento da lista \n");
		scanf("%d", &op);
		switch (op)
		{
		case 1:
			criarListaVazia();
			break;
		case 2:
			inserirNoInicio();
			break;
		case 3:
			exibirLista();
			break;
		case 4:
			inserirFinal();
			break;
		case 5:
			listaVazia();
			break;
		case 6:
			tamanhoLista();
			break;
		case 7:
			primeiroElemento();
			break;
		case 8:
			fimLista();
			break;
		case 9:
			excluiPrimeiro();
			break;

		default:
			printf("Op??o n?o valida, digite uma op??o valida");
			break;
		}

	} while (op != 0);
}
