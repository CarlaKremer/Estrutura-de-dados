#include <conio.h>
#include <stdio.h>
#include <windows.h>

//Pilha
struct no
{
    int valor;
    no *ant;
};
no *topo;

void pilhaVazia()
{
    topo = NULL;
}

void empilha(int pvalor)
{
    no *novo;
    novo = (no *)malloc(sizeof(no));
    novo->valor = pvalor;
    novo->ant = topo;
    topo = novo;

    printf("Valor %d inserido com sucesso", pvalor);

    getch();
    system("cls");
}

void exibir()
{
    no *aux = topo;
    while (aux != NULL)
    {
        printf("\n %d, aux->valor");
        aux = aux->ant;
    }
    getch();
    system("cls");
}

void excluir()
{
    no *aux = topo;
    while (aux != NULL)
    {
        topo = aux->ant;
        free(aux);
        aux = topo;
    }

    printf("Pilha excluida com sucesso.");
    getch();
    system("cls");
}
main()
{
    int valor = 0, op;
    do
    {
        printf("\nDigite 0 para sair");
        printf("\nDigite 1 para inserir (empilhar)");
        printf("\nDigite 2 para mostrar a pilha");
        printf("\nDigite 3 para exibir o valor do topo");
        printf("\nDigite 4 para excluir (desemppilhar)toda a pilha");
        printf("\nEntre com a opcao: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Digite o valor que deseja inserir na pilha: ");
            scanf("%d", valor);
            empilha(valor);
            break;
        case 2:
            exibir();
            break;
        case 3:
            printf("O valor no topo da pilha é: %d, topo->valor");
            getch();
            system("cls");
            break;
        case 4:
            excluir();
        default:
            break;
        }
    } while (op != 0);
}
