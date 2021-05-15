#include <conio.h>
#include <stdio.h>
#include <windows.h>

struct fila
{
    int valor;
    fila *ponteiro;
};
fila *inicio, *fim;

void inserir()
{
    int valor;
    fila *aux;

    aux = (fila *)malloc(sizeof(fila));
    printf("Digite o valor para inserir: ");
    scanf("%d", &aux->valor);

    aux->ponteiro = NULL;

    if (inicio == NULL)
        inicio = fim = aux;
    else
    {
        fim->ponteiro = aux;
        fim = aux;
    }

    printf("Elemento %d inserirdo com sucesso", aux->valor);
    getch();
    system("cls");
}

void exibir()
{
    fila *aux = inicio;

    while (aux != NULL)
    {
        printf("\n %d", aux->valor);
        aux = aux->ponteiro;
    }
    getch();
    system("cls");
}

void excluir()
{
    fila *aux = inicio;
    if (inicio == NULL)
        printf("A fila esta vazia");
    else
    {
        inicio = aux->ponteiro;
        printf("Elemento %d excluido com sucesso", aux->valor);
        free(aux);
    }
    getch();
    system("cls");
}
main()
{
    int op;
    do
    {
        printf("Digite 0 para encerrar");
        printf("\nDigite 1 para inserir");
        printf("\nDigite 2 para exibir");
        printf("\nDigite 3 para remover");
        printf("Entre com sua escolha: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            inserir();
            break;
        case 2:
            exibir();
            break;
        case 3:
            excluir();
            break;
        }
    } while (op != 0);
}