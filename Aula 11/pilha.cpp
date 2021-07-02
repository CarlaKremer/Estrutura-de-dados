#include <conio.h>
#include <stdio.h>
#include <windows.h>

//Pilha
struct no
{
    int valor;
    no *ant;
};
no *topo;

void pilhaVazia()
{
    topo = NULL;
}

void empilha(int pvalor)
{
    no *novo; //novo ponteiro
    novo = (no *)malloc(sizeof(no)); //espaço memoria
    novo->valor = pvalor; //novo valor recebe o valor a ser empilhado
    novo->ant = topo; //anterior recebe topo
    topo = novo; //topo recebe  novo valor

    printf("Valor %d inserido com sucesso", pvalor); //valor foi inserido com sucesso

    getch();
    system("cls");
}

void exibir()
{
    no *aux = topo; //auxiliar recebe topo
    while (aux != NULL) // enquanto o aux for null
    {
        printf("\n %d", aux->valor); //exibe
        aux = aux->ant; //passa pro proximo
    }
    getch();
    system("cls");
}

void excluir()
{
    no *aux = topo; //aux recebe topo
    while (aux != NULL) //enquanto aux é diferente de null
    {
        topo = aux->ant; //topo recebe o anterior
        free(aux);//livra aux
        aux = topo; //aux recebe topo
    }

    printf("Pilha excluida com sucesso.");
    getch();
    system("cls");
}
main()
{
    int valor = 0, op;
    do
    {
        printf("\nDigite 0 para sair");
        printf("\nDigite 1 para inserir (empilhar)");
        printf("\nDigite 2 para mostrar a pilha");
        printf("\nDigite 3 para exibir o valor do topo");
        printf("\nDigite 4 para excluir (desemppilhar)toda a pilha");
        printf("\nEntre com a opcao: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Digite o valor que deseja inserir na pilha: ");
            scanf("%d", &valor);
            empilha(valor);
            break;
        case 2:
            exibir();
            break;
        case 3:
            printf("O valor no topo da pilha é: %d", topo->valor);
            getch();
            system("cls");
            break;
        case 4:
            excluir();
        default:
            break;
        }
    } while (op != 0);
}
