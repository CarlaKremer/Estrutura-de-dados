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

no *cabeca, *aux, *novo;



void inserindoNoFinal(){

//aux e novo criados na struct

    int num;



    novo = (no *)malloc(sizeof(no));

    printf("\nDigite o valor que sera inserido: ");

    scanf("%d",&novo->conteudo);



    novo->proximo = NULL;

	aux = cabeca;

	

    if(aux==NULL)

	{

        cabeca = novo;  

    }

	else

	{

        while(aux->proximo != NULL)

		{

            aux = aux->proximo;

        }

		aux->proximo = novo;

    }

	printf("\n\t--O valor [%d] foi inserido ao final da lista--", novo->conteudo);

	getch();

	system("cls");

} 



void exibirLista()

{

	no *aux;

	aux = cabeca;

	

	printf("\n\tLista: ");

	while (aux != NULL)

	{

		printf("%d, ", aux->conteudo);

		aux = aux->proximo;

	}

	printf("\n\n\t-- Exibicao completa --");

	getch();

	system("cls");

}



main()

{

	int op;

	do

	{

		printf("Digite 0 para sair \n");

		printf("\nDigite 1 para inserir no final");

		printf("\nDigite 2 para exibir"); 

		printf("\nEntre com a opcao desejada: ");

		scanf("%d", &op);

		switch (op)

		{

		case 1:

			inserindoNoFinal();

			break;

		case 2:

			 exibirLista();

			 break;

		case 0:

			printf("\n\n-- Programa finalizado --");

			break;

		default:

			printf("\n\n ! Opcao nao e valida, digite uma opcao valida ! \n\n");

			break;

		}

	} while (op != 0);

}
