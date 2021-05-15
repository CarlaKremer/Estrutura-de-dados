#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define max 3

int dado[max];
int topo = 0;
int op;

void inserir()
{
}

void remover()
{
}

void exibir()
{
}

main()
{
    setlocale(LC_ALL, "Portuguese");
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