// P05 Depois do utilizador inserir um valor, informe se � positivo, negativo ou neutro.
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
void main()
{
    int x;
    printf("Insira um valor: ");
    scanf("%d", &x);
    if (x > 0)
        printf("O valor é positivo.");
    else 
        if (x == 0)
        printf("O valor é neutro.");
        else
        printf("O valor é negativo.");
}