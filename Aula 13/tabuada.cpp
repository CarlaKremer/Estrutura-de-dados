#include <conio.h>
#include <stdio.h>
#include <windows.h>

main()
{
    int num;
    printf("Entre com o número a ser multiplicado: ");
    scanf("%d", &num);

    for (int i = 0; i <= 10; i++)
    {
        printf("\n%d * %d = %d", i, num, i * num);
    }
}