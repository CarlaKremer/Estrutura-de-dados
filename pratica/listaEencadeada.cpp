#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale>

struct no
{
    int conteudo;
    no *proximo;
};
no *cabeca;

void criarListaVazia()
{
    cabeca == NULL;
    printf("\nLista criada com sucesso!");
    getch();
    system("cls");
}

void inserirNoInicio()
{
    int valor;
    printf("Entre com o valor a ser inserido no inicio: ");
    scanf("%d", &valor);
    no *novo;
    novo = (no *)malloc(sizeof(no));
    novo->conteudo = valor;
    if (cabeca == NULL)
    {
        novo->proximo = NULL;
        cabeca = novo;
    }
    else
    {
        novo->proximo = cabeca;
        cabeca = novo;
    }
    printf("Elemento inserido com sucesso!");
    getch();
    system("cls");
}

void exibirLista()
{
    no *aux = cabeca;

    while (aux != NULL)
    {
        printf("%d,", aux->conteudo);
        aux = aux->proximo;
    }
    getch();
    system("cls");
}

void inserirNofinal()
{
    no *novo, *aux;
    aux = cabeca;
    novo = (no *)malloc(sizeof(no));
    printf("Entre com o elemento a ser inserido no final: ");
    scanf("%d", &novo->conteudo);
    novo->proximo = NULL;
    if (aux == NULL)
    {
        cabeca = novo;
    }
    else
    {
        while (aux->proximo != NULL)
        {
            aux = aux->proximo;
        }
        aux->proximo = novo;
    }
    printf("\nElemento inserido na lista com sucesso!");
    getch();
    system("cls");
}

void verificaListaVazia()
{
    if (cabeca == NULL)
    {
        printf("Lista esta vazia!");
    }
    else
    {
        printf("Lista nao esta vazia");
    }
    getch();
    system("cls");
}

void tamanhoLista()
{
    no *aux = cabeca;
    int cont = 0;

    while (aux != NULL)
    {
        cont = cont + 1;
        aux = aux->proximo;
    }
    printf("\nA lista possui %d elementos", cont);

    getch();
    system("cls");
}

void primeiroElemento()
{
    if (cabeca != NULL)
    {
        printf("\nO primeiro elemnto é: %d", cabeca->conteudo);
    }
    else
    {
        printf("\nA lista está vazia.");
    }
    getch();
    system("cls");
}

void ultimoElemento()
{
    printf("\nentrou");

    no *aux = cabeca;

    if (cabeca == NULL)
    {
        printf("\nA lista nao possui elementos");
    }
    else
    {
        while (aux != NULL)
        {
            aux = aux->proximo;
        }
        printf("\nO ultimo elemento e: %d", aux->conteudo);
    }
    printf("\npassou2");
    getch();
    system("cls");
}

void excluiPrimeiro()
{
    no *aux = cabeca;

    if (cabeca == NULL)
    {
        printf("\nA lista nao possui elemetos");
    }
    else
    {
        cabeca = cabeca->proximo;
        printf("Elemento %d excluido com sucesso", aux->conteudo);
        free(aux);
    }
    getch();
    system("cls");
}

main()
{
    int op;
    setlocale(LC_ALL, "Portuguese");

    do
    {
        printf("\nDigite 0 para sair.");
        printf("\n----MENU----");
        printf("\n1- para criar lista");
        printf("\n2 - para inserir no inicio");
        printf("\n3 - para exibir lista");
        printf("\n4 - inserir no final");
        printf("\n5 - para verificar se a lista esta vazia");
        printf("\n6 - para exibir quantos elementos a lista possui");
        printf("\n7 - para exibir o contéudo do inicio da lista");
        printf("\n8 - para exibir o conteudo do final da lista");
        printf("\n9 - para excluir o primeiro elemento da lista");
        printf("\nEntre com sua opcao: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            criarListaVazia();
            break;
        case 2:
            inserirNoInicio();
            break;
        case 3:
            exibirLista();
            break;
        case 4:
            inserirNofinal();
            break;
        case 5:
            verificaListaVazia();
            break;
        case 6:
            tamanhoLista();
            break;
        case 7:
            primeiroElemento();
            break;
        case 8:
            printf("AQUI Ò");
            ultimoElemento();
            break;
        case 9:
            excluiPrimeiro();
            break;
        case 0:
            break;
        default:
            printf("\n\tEscolha invalida!");
            break;
        }

    } while (op != 0);
    printf("\n\t-- Programa encerrado --");
}