#include <stdio.h>
#include <stdlib.h>

int fat (int x)
{
    if (x ==1 || x == 0)
            return 1;
    return x * fat (x - 1);
}

/*int fatorial (int n)
{
if (n != 0 || n != 1)
    	return (n * fatorial(n-1));
    else
    	return 0;


    if (n ==1 || n == 0)
        {
            return 1;
        }
    else
    {
        return n * fatorial (n - 1);
    }
}*/

main()
{
    int  fatorial, numero = 0;
    
    printf("Entre com o número para receber seu fatorial: ");
    scanf("%d", &numero);

    fatorial = fat(numero);
    
    printf("%d! = %d",numero,fatorial);
}
