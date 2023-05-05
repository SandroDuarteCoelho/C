

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

void main()
{
    char arraChar[9];
    for (int i = 0; i < 9; i++)
    {
        printf("\nInsira um valor: ");
        scanf(" %c", &arraChar[i]);
    }
    puts("--- Valores do array ---");
    for (int i = 0; i < 9; i++)
        printf("%c ", arraChar[i]);
    puts("--- Valores do array ---");
    printf("Nome anterior: %s\n", arraChar);
    printf("Novo nome: ");
    scanf(" %s", arraChar);
    printf("Nome duma vez: %s", arraChar);
}
