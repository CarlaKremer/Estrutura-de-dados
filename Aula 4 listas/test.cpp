#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

struct no //nome no
{
    int conteudo;
    no *proximo; //ponteiro do tipo no que vai apontar pro próximo elemento
};
no *cabeca; //inicio da lista no é a cabeca, variavel de controle

void criarListaVazia()
{
    cabeca == NULL;
    printf("A lista foi criada");
    getch();
    system("cls");
}

void inserirNoInicio()
{
    int valor;
    no *novo; // novo nó,, auxiliar para pegar o novo elemento
    printf("Digite o novo valor que será inserido no início da lista: ");
    scanf("%d", &valor);             //valor que será inserido na lista
    novo = (no *)malloc(sizeof(no)); //reserva de espaço da memória. "novo" recebe o endereço o qual foi reservado;
    novo->conteudo = valor;          //passa o conteudo pro novo
    if (cabeca == NULL)
    {                         //situação 1 - Lista está vazia
        novo->proximo = NULL; //se a lista tiver vazia o novo proximo vai apontar pra nulo
        cabeca = novo;        //cabeca vai ser o novo elemento
    }
    else //a lista já possui elementos:
    {
        novo->proximo = cabeca; //setando o proximo elemento/// cabeca vai ter que apontar pro novo elemento
        cabeca = novo;          //novo inicio      o novo valor assume a cabeca
    }
    printf("\nElemento inserido com sucesso");
    getch();
    system("cls");
}
void exibirLista()
{
    no *aux;            //precisa de um auxiliar para percorrer a lista
    aux = cabeca;       // auxiliar aponta pra cabeca
    while (aux != NULL) // enquanto não chegar no fim
    {
        printf("%d", aux->conteudo); //exibe conteudo
        aux = cabeca->proximo;       //adquire proximo elemento
    }
    printf("\nElementos exibidos com sucesso!");
    getche();
    system("cls");
}

void inserirNoFinal()
{
    no *novo, *aux;
    printf("Digite o elemento que será inserido no final da lista: ");
    scanf("%d", &novo->conteudo);
    novo = (no *)malloc(sizeof(no));
    aux = cabeca;
    if (cabeca == NULL)
    {
        cabeca = novo;
    }
    else
    {
        while (aux->proximo != NULL) //enquanto o proximo for diferente de null
        {
            aux = aux->proximo; //vai pro proximo
        }
        aux->proximo = novo; //insere conteudo no final
    }
    printf("\nElementos inseridos com sucesso!");
    getche();
    system("cls");
}

main()
{
    setlocale(LC_ALL, "Portuguese");

    int op;
    do
    {
        printf("--Digite 0 para sair-- \n");
        printf("\nDigite 1 para criar uma lista vazia");
        printf("\nDigite 2 para inserir no início da lista");
        printf("\nDigite 3 para exibir a lista");
        printf("\nDigite 4 para inserir no final da lista");
        printf("\nDigite 5 para verificar se a lista está vazia");
        printf("\nDigite 6 para exibir quantos elementos a lista possui");
        printf("\nDigite 7 para exbir o conteúdo do primeiro elemento");
        printf("\nDigite 8 para exibir o conteúdo do fim da lista");
        printf("\nDigite 9 pata excluir o primeiro elemento da lista \n");
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
            inserirNoFinal();
            break;
        default:
            printf("\n\nOpção Invalida ! Digite uma opção valida. ");
            break;
        }
    } while (op != 0);
}