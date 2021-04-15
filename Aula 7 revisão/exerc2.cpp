#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

struct no
{
    int valor;
    no *prox;
};
no *cabeca;

void inserirValor()
{
    no *aux = cabeca;
    no *novo;
    novo - (no *)malloc(sizeof(no));
    printf("\nDigite o novo valor que sera a lista");
    scanf("%d", &novo->valor);
    novo->prox = NULL;
    if (aux == NULL)
        cabeca = novo;
    else
        novo->prox = aux;
    novo = aux;
}

void consultar()
{
    no *aux = cabeca;
    int v;
    printf("Digite o valor que deseja consultar: ");
    scanf("%d", &v);
    bool achou = false;

    while (aux != NULL)
}

void exibirLista()
{
    no *aux = cabeca;

    if (cabeca == NULL)
    {
        printf("Lista sem elementos!");
    }
    else
    {
        while (aux != NULL)
        {
            printf("%d", aux->valor);
            aux = aux->prox;
        }
    }
}

main()
{
    int op;
    do
    {
        printf("Digite 0 para sair \n");
        printf("\nDigite 1 para inserir um valor a lista");
        printf("\nDigite 2 para Consultar um valor");
        printf("\nDigite 3 para exibir a lista");
        printf("\nDigite 4 para remover um valor");
        printf("\nEntre com a opção desejada:");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            inserirValor();
            break;
        case 2:
            consultar();
            break;
        }
    }
}