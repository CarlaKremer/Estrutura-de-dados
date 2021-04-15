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

no *cabeca;

int inserirNoInicio()
{

	int elemento;

	printf("Digite o novo valor que será inserido no inicio da lista");

	scanf("%d", &elemento);

	

	no *novo;

	novo = (no *)malloc(sizeof(no));

	novo->conteudo = elemento;

	

	if (cabeca != NULL)

	{

		novo->proximo = cabeca; 

		cabeca = novo; 

	}

	else //lista vazia:

	{

		novo->proximo = NULL;

		cabeca = novo; 

	}

	printf("\n\t--Novo elemento [ %d ] foi inserido com sucesso!", elemento);

	getch();

	system("cls");

	return elemento;

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

main()
{
	int op;
	int valor;
	do
	{
		printf("Digite 0 para sair \n");
		printf("\nDigite 1 para inserir no inicio");
		printf("\nDigite 2 para exibir"); 
		scanf("%d", &op);
		switch (op)
		{
		case 1:
			valor = inserirNoInicio();
			printf("\n\t--Novo elemento [ %d ] foi inserido com sucesso!", valor);
			system("cls");
			break;
		case 2:
			 exibirLista();
			 break;
		default:
			printf("Opcao nao e valida, digite uma opcao valida");
			break;
		}
	} while (op != 0);
}
