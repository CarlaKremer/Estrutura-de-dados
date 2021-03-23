#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

struct no
{
	//Aluno aluno;//exemplo struct dentro de struct
	int conteudo; //valor
	no *proximo;  //aponta para proximo
	no *anterior; //aponta para anterior
};
no *cabeca;
/* 
struct Aluno
{           //exemplo struct dentro de struct
	int id;
	char nome[20];
	int idade;
	char curso[20];
	int semestre;
};*/

criarListaVazia()
{
	cabeca = (no *)malloc(sizeof(no));
	cabeca = NULL;
	printf("\nA lista foi criada com sucesso");
	getch();
	system("cls");
}

liberaLista()
{
	no*aux = cabeca; //aux adquire cabeca
	if (cabeca == NULL)
	{
		printf("\nA lista não possui elementos");
	}
	else
	{
		while (cabeca != NULL) //enquanto não estiver vazia
		{
			cabeca = cabeca->proximo;  //cabeca adquire o proximo
			free(aux);                 //libera aux
		}
		free(cabeca);            //libera cabeca
		printf("\nA lista foi excluida com sucesso");
	}
	getch();
	system("cls");
}

tamanhoLista()
{
	no *aux = cabeca;
	int contador= 0;
	if(cabeca ==NULL)
	{
		printf("\nLista está vazia");
	}
	else
	{
		while(aux->proximo != NULL)
		{
			aux = aux->proximo;
			contador++;
		}
		printf(" A lista possui [%d] elementos", contador);
	}
	getch();
	system("cls");
}

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	do 
	{
		printf("--Digite 0 para sair-- \n");
		printf("\nDigite 1 para criar a lista");
		printf("\nDigite 2 para libarar a lista");
		printf("\nDigite 3 para saber o tamanho da lista");
		printf("\n\nEscolha sua opção: ");
		scanf("%d", &op);
		switch(op)
		{
		case 1:
			criarListaVazia();
			break;
		case 2:
			liberaLista();
			break;	
		case 3:
			tamanhoLista();
			break;
		default:
			printf("\nOpção invalida!") ;
			break;
		}
		
	}while(op != 0);
}
