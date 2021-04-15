#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

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
    printf("Digite o valor que será inserido: ");
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
	printf("--O valor foi inserido ao final da lista--");
	getch();
	system("cls");
} 

======================================================
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

inserirNoInicio()
{
	int elemento;
	printf("Digite o novo valor que será inserido no inicio da lista");
	scanf("%d", &elemento);
	
	no *novo;
	novo = (no *)malloc(sizeof(no));
	novo->conteudo = elemento;
	
	if (cabeca != NULL)
	{
		novo->proximo = cabeca; //proximo elemento será o atual cabeca
		cabeca = novo; //novo cabeca será o novo valor
	}
	else //lista vazia:
	{
		novo->proximo = NULL;
		cabeca = novo; 
	}
	printf("\n\t--Novo elemento [ %d ] foi inserido com sucesso!", elemento);
	getch();
	system("cls");
}
