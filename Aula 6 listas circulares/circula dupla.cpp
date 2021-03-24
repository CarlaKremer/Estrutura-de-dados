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
} lista;
lista *p, *q = NULL, *prim = NULL;
//prim = cabeca, p= aux , q = lista em si
//primeiro aponta para o ultimo na dupla circular

void inserirnaLista(int valor)
{
    p = (lista *)malloc(sizeof(lista));
    p->valor = valor;

    if (prim == NULL) //se o primeiro for null
        prim = p;     //primeiro recebe aux

    p->prox = prim; //aux prox recebe primeiro
    p->ant = prim;  //aux anterior recebe primeiro

    if (q != NULL) //se não for nula
    {
        q->prox = p; //lista proximo recebe aux
        q->ant = p;  //lista anterior recebe aux
        prim->ant = p;
    }

    q = p; //lista recebe aux

    printf("Valor inserido com sucesso!");
    getch();
    system("cls");
}

void removerDaLista()
{
    int valor, achou = 0;

    printf("\nDigite o valor que deseja remover: ");
    scanf("%d", &valor);
    p = prim;
    do
    {
        if (p->valor != valor) //se o valor da lista for != do valor
        {
            q = p;       //lista recebe aux
            p = p->prox; //aux é o novo proximo
        }
        else
        {
            if (p == prim) //remover primeiro valor
            {
                do
                {
                    q = p;       //lista recebe aux
                    p = p->prox; //aux é o novo proximo

                } while (p != prim); //q fim da lista

                q->prox = prim->prox; //inicio recebe auxiliar do proximo como novo proximo
                prim = prim->prox;    //novo inicio é o antigo proximo
                prim->ant = q;
                //q->ant = prim->ant;   //inicio recebe auxiliar do anterior como novo anterior
            }
            else //outro elemento qualquer
            {
                q->prox = p->prox;
                p->prox->ant = q;
            }
            free(p);
            p = NULL;
            achou = 1;
            printf("achou: %d", achou);
        }
    } while (p != prim && achou == 0);

    if (achou == 0)
        printf("\nA lista não possui o elemento digitado\n");
    else
        printf("\nElemento %d excluído", valor);
    getch();
    system("cls");
}

void exibirLista()
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
        printf("\n2 - Para remover a lista");
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
            removerDaLista();
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