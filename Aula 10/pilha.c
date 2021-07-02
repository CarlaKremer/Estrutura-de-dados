#include <stdio.h>
#include <stdlib.h>
#define max 3

/*typedef struct
{
    int dado[max];
    int topo = 0;
} pilha[3];*/

int op;//opcao desejada
int dado[max];//dado
int topo;//topo da pilha

void inserir()
{
    if (topo == max) //se a pilha estiver cheia
    {
        printf("A pilha esta cheia.\n"); 
    }
    else
    {
        printf("Digite o valor que deseja inserir: "); 
        scanf("%d", &dado[topo]); //dado que vai ser inserido
        topo++; //+1
        printf("\nValor inserido com sucesso!");
    }
    getch();
    system("cls");
}

void remover()
{
    if (topo == 0) //se pilha estiver vazia
    {
        printf("\nA pilha esta vazia");
    }
    else
    {
        printf("\nRetirando o valor %d da pilha", dado[topo - 1]); //retira valor
        topo--;
    }
    getch();
    system("cls");
}

void exibir()
{
    for (int i = topo - 1; i >= 0; i--) //para topo -1 i maior igual a 0, i menos
    {
        printf("Na posição %d temos %d \n", i, dado[i]); //exibe
    }
    printf("\nExibição completa!");
    getch();
    system("cls");
}

void menu()
{
    //setlocale(LC_ALL, "Portuguese");
    int op = 0;
    do
    {
        printf("\t- MENU -");
        printf("\nDigite 1 para inserir");
        printf("\nDigite 2 para remover");
        printf("\nDigite 3 para exibir");
        printf("\nDigite 4 para sair");
        printf("\n\nEntre com a opcao desejada: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            inserir();
            break;
        case 2:
            remover();
            break;
        case 3:
            exibir();
            break;
        case 4:
            printf("\n\n-- Programa finalizado --\n\n");
            break;
        default:
            printf("\t\nCodigo invalido, digite novamente\n");
            break;
        }
    } while (op != 4);
}

main()
{
    menu();
}