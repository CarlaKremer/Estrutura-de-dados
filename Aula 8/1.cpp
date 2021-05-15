#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 5

int dado[MAX];
int auxLista;
int op;

void remover()
{
	int valor;
	bool aux = false;
	int x[1];

	if (auxLista == 0)
	{
		printf("A lista nao possui elementos");
	}
	else
	{
		printf("\n Digite o elemento que deseja remover: ");
		scanf("%d", &valor);

		for (int i = 0; i <= auxLista - 1; i++)
		{
			if (dado[i] == valor)
			{
				dado[i] = dado[i + 1];
				auxLista--;
				aux = true;
			}
		}
	}
	if (!aux)
		printf("\n O valor n�o foi encontrado");
	else
		printf("\n O valor foi removdido");
}

void exibir()
{
	if (auxLista == MAX)
	{
		printf("A lista esta cheia.");
	}
	else
	{
		for (int temp = 0; auxLista - 1 >= temp; temp++)
		{
			printf("Posicao %d temos %d \n", temp, dado[temp]);
		}
	}
	system("PAUSE");
}

void inserir()
{
	if (auxLista == MAX)
		printf("A lista esta cheia");
	else
	{
		printf("Digite o valor para inserir na lista: ");
		scanf("%d", &dado[auxLista]);
		auxLista++;
	}
	exibir();
}

int menu()
{
	printf("\n- Digite 4 para sair -\n");
	printf("\n Digite 1 para inserir");
	printf("\n Digite 2 para remover");
	printf("\n Digite 3 para exibir");
	printf("\n Digite 4 para sair");
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
		return 0;
	}
}

main()
{
	setlocale(LC_ALL, "Portuguese");
	auxLista = 0;
	while (op != 4)
	{
		system("cls");
		menu();
	}
}
