#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

struct no
{
    int valor;
    no *proximo;
    no *anterior;
};
struct no *inicio;

/*1*/ void inserirNoInicio(int valor)
{
    no *novo;
    novo = (no *)malloc(sizeof(no));
    novo->valor = valor;
    if (inicio == NULL)
    {
        novo->anterior = NULL;
        novo->proximo = NULL;
        inicio = novo;
    }
    else
    {
        inicio = novo;
        novo->anterior = NULL;
        novo->proximo = inicio;
        inicio = novo;
    }
    printf("\nNúmero inserido com sucesso.");
    getch();
    system("cls");
}

/*2*/ void mostrarLista()
{
    no *aux = inicio;

    while (aux != NULL)
    {
        printf("\n%d", aux->valor);
        aux = aux->proximo;
    }
    printf("\nLista exibida.");

    getch();
    system("cls");
}

/*3*/ void mostrarListaInversa()
{
    no *aux = inicio;

    if (aux != NULL)
    {
        while (aux->proximo != NULL)
        {
            aux = aux->proximo;
        }
        do
        {
            printf("\n%d", aux);
            aux = aux->anterior;
        } while (aux != NULL);
        printf("Lista exibida com sucesso.");
    }
    else
    {
        printf("\nLista vazia.");
    }

    getch();
    system("cls");
}

/*4*/ void inserirFinal(int valor)
{
    no *aux = inicio;
    no *novo;
    novo = (no *)malloc(sizeof(no));

    if (aux != NULL)
    {
        while (aux->proximo != NULL)
        {
            aux = aux->proximo;
        }
        novo->proximo = novo;
        novo->proximo = NULL;
        novo->anterior = aux;
    }
    else
    {
        inicio = novo;
        novo->proximo;
        novo->anterior;
    }
    printf("Adicionado a lista com sucesso.");
    getch();
    system("cls");
}

/*6*/ void tamanhoLista()
{
    no *aux = inicio;
    int contador;
    if (aux == NULL)
    {
        printf("A Lista não possui elementos.");
    }
    else
    {
        while (aux->proximo != NULL)
        {
            aux = aux->proximo;
            contador++;
        }
        printf("\n\nA lista possui %d elementos", contador);
    }
}

main()
{
    setlocale(LC_ALL, "Portuguese");

    int op, valor;

    do
    {
        printf("--Digite 0 para sair-- \n");
        printf("\nDigite 1 para inserir no início ");
        printf("\nDigite 2 para mostrar a lista");
        printf("\nDigite 3 para exibir a lista ao contrário");
        printf("\nDigite 4 para inserir no final da lista");
        printf("\nDigite 5 para escolher em que posição o elemento será inserido. [%d]");
        printf("\nDigite 6 para verificar quantos elementos a lista possui");
        printf("\n\nEscolha sua opção: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Entre com o número a ser inserido: ");
            scanf("%d", &valor);
            inserirNoInicio(valor);
            break;
        case 2:
            mostrarLista();
            break;
        case 3:
            mostrarListaInversa();
            break;
        case 4:
            printf("Entre com o número a ser inserido: ");
            scanf("%d", &valor);
            inserirFinal(valor);
            break;
        case 6:
            tamanhoLista();
            break;
        default:
            printf("Opção inválida!");
            break;
        }

    } while (op != 0);
    printf("----------- Programa encerrado -----------");
}