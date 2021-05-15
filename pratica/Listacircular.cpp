#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>

typedef struct no
{
    int valor;
    no *prox;
} lista;
lista *cabeca;

void inserirNaLista(int valor)
{
    no *aux = cabeca;
    no *novo;
    novo = (no *)malloc(sizeof(no));
    aux->valor = valor; //aux recebe valor

    if (cabeca == NULL) //se lista vazia
    { 
        cabeca = aux; // cabeca recebe aux
    }
    novo->prox = cabeca; // fora do if

    if (novo != NULL) //se a lista for vazia
    {
        novo->prox = aux; //proximo recebe aux
    }
    novo = aux;

    printf("valor recebido com sucesso!");
    getch();
    system("cls");
}

void removerALista()
{
    int valor, achou = 0;

    printf("\nDigite o valor a ser removido: ");
    scanf("%d", &valor);
    no *aux ;
    no *novo;
    novo = (no *)malloc(sizeof(no));
    aux = cabeca;
    do
    {
        if (aux->valor != valor) //se o valor a ser retirado for diferente do primeiro valor
        {
            novo = aux; //lista recebe aux (cabeca)
            aux = aux->prox; //recebe o proximo
        }
        else
        {
            if (aux == cabeca) // se for o primeiro elemento

            {
                do
                {
                    novo = aux; //lista adiquire auxiliar
                    novo = novo->prox; //novo adiquire o prox

                } while (aux != cabeca);

                novo->prox = cabeca->prox;
                cabeca = cabeca->prox;
            }
            else
            {
                novo->prox = aux->prox;
            }
            free(aux);
            aux = NULL;
            achou = 1;
            printf("Achou: %d", achou);
        }
    } while (achou == 0);
    if (achou == 0)
        printf("\nA lista não possui o elemento digitado.\n");
    else
        printf("Elemento excluído", valor);
    getch();
    system("cls");
}

void exibirLista()
{
    no *aux = cabeca;
    do
    {
        printf("%d", aux->valor);
        aux = aux->prox;
    } while (aux != cabeca);

    printf("\nPrimeiro valor: %d", aux->valor);
    printf("\nLista exbida om sucesso!");
    getch();
    system("cls");
}

main()
{
    setlocale(LC_ALL, "Portuguese");
    int op, valor;

    do
    {
        printf("Digite 0 para sair.");
        printf("--- MENU ---");
        printf("1 - para inserir na lista");
        printf("2 - para remover a lista");
        printf("3 - para exibir a lista");
        printf("Entre com a opção desejada: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Entre com o valor a ser inserido: ");
            scanf("%d", &valor);
            inserirNaLista(valor);
            break;
        case 2:
            removerALista();
            break;
        case 3:
            exibirLista();
            break;
        case 0:
            printf("\n\nPrograma finalizado.....");
            break;
        default:
            printf("Opcao invalida!");
        }
    } while (op != 0);
}