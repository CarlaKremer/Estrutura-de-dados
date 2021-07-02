/*quantos depositos foram feito = x
valores = y

O prof. Elvio precisa criar um algoritmo para somar os depósitos em sua conta. 
Escreva uma função recursiva para calcular a soma de uma quantidade x de depósitos e y valores.
/*#include <stdio.h>
#include <stdlib.h>

int somador(int qtd)
{
    int soma, valor;
    if (qtd > 0)
    {
        printf("Qual o valor do deposito?: ");
        scanf("%d", &valor);
        return (soma = valor + somador(qtd - 1));
    }
    return 0;
}

main()
{
    int qtd, resultado;

    printf("Quantos depositos serao contabilizados? ");
    scanf("%d", &qtd);

    resultado = somador(qtd);

    printf("A soma dos depositos e:%d", resultado, "\n\n");
}*/
#include <stdlib.h>
#include <stdio.h>

int somador (int x, int y)
{
    if (y>0)
    {
        printf("%d * %d = %d\n", x, y, x*y);
        return somador(x, y-1);
    }
    return 0;
}
main()
{
    int mult, tabuada = 10, valor;

    printf("Entre com o número que será multiplicado: ");
    scanf("%d", &valor);

    mult = somador(valor, tabuada);
}