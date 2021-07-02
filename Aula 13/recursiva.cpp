#include <stdio.h>
#include <stdlib.h>

int multiplcacao(int x, int y)
{
    if (y > 0) //enquanto y não for 0
    {
        printf("\n%d * %d = %d", x, y, x * y); //imprime o uma multiplicação até que o y chegue a 0
        (multiplcacao(x, y - 1));              //envia de volta para funcão o x que é o valor que está sendo multiplicado e o y menos 1
    }
    return 1;
}

main()
{
    int tabuada = 0, mult, multiplicador = 10;         //tabuado se inicia com 0, mult para receber a funcao, multiplicador recebe 10
    printf("Entre com o número a ser multiplicado: "); //pede o número que vai mostrar a tabuada
    scanf("%d", &tabuada);                             //recebe

    mult = multiplcacao(tabuada, multiplicador); //funcao que vai multiplcar recebe a tabuada o o númeor a ser multiplicado
}
