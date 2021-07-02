/*quantos depositos foram feito = x
valores = y

O prof. Elvio precisa criar um algoritmo para somar os depósitos em sua conta. 
Escreva uma função recursiva para calcular a soma de uma quantidade x de depósitos e y valores.*/
#include <stdio.h>
#include <stdlib.h>

int somador(int qtd)
{
    int val, somar;
    if (qtd > 0) //se a qtd de depositos for maior que 1
    {
        printf("Informe o valor[%d]: ", qtd);    //informar valor de um depósito
        scanf("%d", &val);                       //scaneia
        return (somar = val + somador(qtd - 1)); //returna pra própia função esse somar, que é o resultado de tudo até agora, mais o atual, ao mesmo tempo que diminui um da quantidade
    }
    return 0;
}

main()
{
    int qtd, result; //quantidade de depósitos e resultado final

    printf("Informe a quantia de depositos a ser contabilizada: "); //pede depósitos
    scanf("%d", &qtd);                                              //scaneia

    result = somador(qtd); //manda para a funcao a qtd de depositos que serão contabilizados

    printf("\nresult === Soma dos depositos: %d\n", result); //printa resultado
}