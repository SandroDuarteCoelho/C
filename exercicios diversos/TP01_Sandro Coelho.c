
/* Elabore um algoritmo que guarde num vetor uma lista de 10 valores reais
Posteriormente calcule e mostre a média dos valores do vetor*/

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

void main()
{
    float arrValores[10], soma = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("\nInsira um valor: ");
        scanf(" %f", &arrValores[i]);
    }

    for (int i = 0; i < 10; i++)
        soma += arrValores[i];

    puts("--- Média dos Valores do array ---");
    printf("Soma = %f\n", soma);
    printf("Média = %f ", soma / 10);
}
