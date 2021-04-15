#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

typedef struct circular
{
    int valor;
    circular *prox;
    circular *ant;
} no;
no *inicio = NULL, *aux = NULL, *novo;

void inserir(int valor) //inserir valor recebe o valor a ser inserido
{
    novo = (no *)malloc(sizeof(no)); //cria espaço na memória
    aux->valor = valor;              //aux recebe o valor a ser inserido

    if (inicio == NULL) //se a lista estiver vazia
        inicio = aux;   //inicio recebe o valor

    aux->prox = inicio; //o proximo será o inicio pois circular
    aux->ant = inicio;  //e o anterior recebe inicio pois circular

    if (novo != NULL) //se a lista não estiver vazia:
    {
        novo->prox = aux;
        novo->ant = aux;
        inicio->ant = aux;
    }

    novo = aux;

    printf("Valor inserido com sucesso!");
    getch();
    system("cls");
}

void remove()
{
    int valor, achou = 0;

    printf("\nDigite o valor que deseja remover");
    scanf("%d", &valor);
    aux = inicio;
    do
    {
        if (aux->valor != valor)
        {
            novo = aux;
            aux = aux->prox;
        }
        else
        {
            if (aux == inicio)
            {
                do
                {
                    novo = aux;
                    aux = aux->prox;

                } while (aux != inicio);

                novo->prox = inicio->prox;
                inicio = inicio->prox;
                inicio->ant = novo;
            }
            else
            {
                novo->prox = aux->prox;
                aux->prox->ant = novo;
            }
            free(aux);
            aux = NULL;
            achou = 1;
            printf("achou %d", achou);
        }

    } while (aux != inicio && achou == 0);

    if (achou == 0)
        printf("\nA lista nao possui o elemento digitado\n");
    else
        printf("\nElemento %d excluido", valor);
    getch();
    system("cls");
}

void exibirLista()
{
    novo = inicio;

    do
    {
        printf(" %d,", aux->valor);
        aux = aux->prox;
    } while (novo != inicio);

    printf("\nPrimeiro valor: %d", aux->valor);
    printf("\nLista exibida com sucesso!");
    getch();
    system("cls");
}

main()
{
    int op, valor;
    setlocale(LC_ALL, "Portuguese");

    do
    {
        printf("Digite 0 para sair.");
        printf("\t\n-- MENU --");
        printf("\n1 - Para inserir na lista");
        printf("\n2 - Para remover a lista");
        printf("\n3 - Para exibir a lista");
        printf("\nEntre com sua opcao: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Insira o valor: ");
            scanf("%d", &valor);
            inserir(valor);
            break;
        case 2:
            remove();
            break;
        }
    } while (op != 0);
}