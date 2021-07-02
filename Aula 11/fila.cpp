#include <conio.h>
#include <stdio.h>
#include <windows.h>

struct fila
{
    int valor; //um valor que será inserido
    fila *ponteiro; // um ponteiro
};
fila *inicio, *fim; //um inicio e fim

void inserir()
{
    int valor; //valor que será inserido
    fila *aux; //cria aux para percorrer a fila

    aux = (fila *)malloc(sizeof(fila)); //cria espaço na memória
    printf("Digite o valor para inserir: "); //recebe o valor a ser inserido
    scanf("%d", &aux->valor);//guardo o valor em aux apontando para valor

    aux->ponteiro = NULL; //aux->ponteiro é null

    if (inicio == NULL) //se a lista estiver vazia
        inicio = fim = aux; // inicio recebe o fim e fim recebe o aux
    else
    {
        fim->ponteiro = aux;// se não estiver vazia o poteiro de fim recebe o aux
        fim = aux; // e fim recebe valor
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