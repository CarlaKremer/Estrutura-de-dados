#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

struct Funcionario
{
    char nome[40];
    struct
    {
        int dia;
        int mes;
        int ano;
    } dataNasc;
    char departamento[10];
    float salario;
};

struct no
{
    int dado;
    struct no *prox;
};
struct no *inicio;
struct no *final;

void criarLista()
{
    inicio = NULL;
    final = NULL;
    printf("\nLista criada com sucesso!");
    getch();
    system("cls");
}

void insereNaLista(int valor)
{
    no *aux;
    aux = (no *)malloc(sizeof(no));

    if (aux == NULL)
    {
        printf("Erro: MEMORIA INSUFICIENTE \n\n");
    }
    else
    {
        aux->dado = valor;
        if (inicio == NULL)
        {
            inicio = aux;
            final = aux;
        }
        else
        {
            final->prox = aux;
            aux->prox = inicio;
            final = aux;
            final->prox = inicio;
        }
        printf("Número inserido com sucesso");
    }
    getch();
    system("cls");
}

void removeLista()
{
    no *aux = inicio;

    inicio = inicio->prox;
    final->prox = inicio; //faz pular um item da lista e depois o libera (free)

    free(aux);

    printf("Numero liberado com sucesso");
    getch();
    system("cls");
}

void exibirLista()
{
}

main()
{
    setlocale(LC_ALL, "Portuguese");
    int op, valor;

    do
    {
        printf("\t\n--MENU--");
        printf("\n1- Criar Lista");
        printf("\n2 - Inserir valorna lista");
        printf("\n3 - RemoverDaLista");
        printf("\n4 - Exibir lista");
        printf("\nEscolha sua opção: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            criarLista();
            break;
        case 2:
            printf("Qual o valor a ser inserido?: ");
            scanf("%d", &valor);
            insereNaLista(valor);
            break;
        case 3:
            removeLista();
            break;
        case 4:
            exibirLista();
            break;
        default:
            printf("\nOpção invalida!");
            break;
        }
    } while (op != 0);
    printf("\t\n-- Programa finalizado --");
}