#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

typedef struct circular
{
    int valor;
    circular *prox;
} lista;
lista *p, *q = NULL, *prim = NULL; //prim = cabeca, p= aux , q = novo/lista em si

/*1*/ void inserirnaLista(int valor)
{
    p = (lista *)malloc(sizeof(lista));
    p->valor = valor; //aux->valor recebe valor inserido

    if (prim == NULL)
        prim = p; // (p é auxiliar) inicio recebe aux

    p->prox = prim; //aux->prox recebe inicio (fora do if)

    if (q != NULL)   //se a nÃ£o for for nula
        q->prox = p; //lista->prox receba aux

    q = p; //lista recebe aux (fora do if)

    printf("Valor inserido com sucesso!");
    getch();
    system("cls");
}

/*2*/ void removerALista()
{
    int valor, achou = 0;

    printf("\nDigite o valor que deseja remover: ");
    scanf("%d", &valor);
    p = prim;
    do
    {
        if (p->valor != valor)
        {
            q = p;
            p = p->prox;
        }
        else
        {
            if (p == prim) //remove primeiro elemento
            {
                do
                {
                    q = p;
                    p = p->prox;

                } while (p != prim); //q esta no fim da lista

                q->prox = prim->prox; //q aponta para o segundo elemento
                prim = prim->prox;    //primeiro passa a ser o segundo elemento
            }
            else
            { //outro elemento qualquer
                q->prox = p->prox;
            }
            free(p);
            p = NULL;
            achou = 1;
            printf("achou: %d", achou);
        }

    } while (p != prim && achou == 0);

    if (achou == 0)
        printf("\nA lista não possui o elemente digitado\n");
    else
        printf("\nElemento %d excluido", valor);
    getch();
    system("cls");
}

/*3*/ void exibirLista()
{
    p = prim;

    do
    {
        printf("%d, ", p->valor);
        p = p->prox;     //passa para o proximo
    } while (p != prim); //enquanto aux for diferente do inicio/ antes de voltar pro começo

    printf("\nPrimeiro valor: %d", p->valor);
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
        printf("\n2 - Para remover a lista"); //escolher qual elemento da lista vai excluir
        printf("\n3 - Para exibir a lista");
        printf("\nEntre com sua opção: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("\nEntre com o valor a ser inserido: ");
            scanf("%d", &valor);
            inserirnaLista(valor);
            break;
        case 2:
            removerALista();
            break;
        case 3:
            exibirLista();
            break;
        case 0: //para não exibir o "opção inválida", já que o 0 finaliza o programa
            break;
        default:
            printf("\nOpção invalida!\n");
            getch();
            system("cls");
            break;
        }

    } while (op != 0);
    printf("\n\t-- Programa finalizado --");
}
