

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

void main()
{
    int arraInteiros[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nInsira um valor: ");
        scanf(" %d", &arraInteiros[i]);
    }
    puts("--- Valores do array ---");
    for (int i = 0; i < 5; i++)
        printf("%d ", arraInteiros[i]);
}
