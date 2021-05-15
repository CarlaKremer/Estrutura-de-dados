//FIFO = First in first out
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define MAX 5

int dado[MAX];
int fimFila;
int op;

void inserir()
{
    if (fimFila == MAX) 
        printf("\n A lista esta cheia! Nao e possivel adicionar mais elementos.\n\n");
    else
    {
        printf("Digite o valor que deseja inserir na fila: ");
        scanf("%d", &dado[fimFila]);
        fimFila++;
    }
    system("PAUSE");
    system("cls");
}

void remover()
{
    if (fimFila == 0)
        printf("A fila esta vazia");
    else
    {
        printf("O elemento removido e: %d \n", dado[0]); //remove o primeiro
        for (int i = 0; i <= fimFila - 1; i++)
        {
            dado[i] = dado[i + 1];
        }
        fimFila--;
    }
    system("PAUSE");
    system("cls");
}

void exibir()
{
    if (fimFila == 0)
        printf("A fila esta vazia!\n");
    else
    {
        //for (int i = 0; fimFila > i; i++) prof fez mas não sabe pq deu certo
        for (int i = 0; fimFila - 1 >= i; i++)
        {
            printf("Na posicao %d temos %d \n", i, dado[i]);
        }
    }
    system("PAUSE");
    system("cls");
}

main()
{
    int op = 0;
    while (op != 4)
    {
        printf("\t- MENU -");
        printf("\nDigite 1 para inserir");
        printf("\nDigite 2 para remover");
        printf("\nDigite 3 para exibir");
        printf("\nDigite 4 para sair");
        printf("\n\nEntre com a opcao desejada: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            inserir();
            break;
        case 2:
            remover();
            break;
        case 3:
            exibir();
            break;
        case 4:
            printf("\n\n-- Programa finalizado --\n\n");
            break;
        default:
            printf("\t\nCodigo invalido, digite novamente\n");
            break;
        }
    }
}
