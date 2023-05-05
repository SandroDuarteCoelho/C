// leia 10 numeros e mostra o maio e o menor

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
void main()
{

    int x;
    float valor, max, min;

    printf("Insira o %d valor: ", x);
    scanf("%f", &valor);
    max = valor;
    min = valor;

    for (x = 1; x <= 10; x++)
    {
        printf("Insira o %d valor: ", x);
        scanf("%f", &valor);
        if (valor > max)
            max = valor;
        if (valor < min)
            min = valor;
    }

    // while (x <= 9)
    // {
    //     printf("Insira o %d valor: ", x);
    //     scanf("%f", &valor);
    //     x++;
    //     if (valor > max)
    //         max = valor;
    //     if (valor < min)
    //         min = valor;
    // }
    printf("O maior é: %.2f\n", max);
    printf("O menor é: %.2f", min);



    // ternary  https://www.freecodecamp.org/news/c-ternary-operator/
    
    int min = INT_MAX, max = INT_MIN;
    int i = 0, val = 0;
    do
    {
        printf("Introduza o numero %2d : ", ++i);
        scanf(" %d", &val);
        max = val > max ? val : max;
        min = min > val ? val : min;
    } while (i < 10);
    printf("\n");
    printf("Menor numero inserido: %d.\n", min);
    printf("Maior numero inserido: %d.\n\n", max);



    int min = INT_MAX, max = INT_MIN;
    int i = 0, val = 0;
    do
    {
        printf("Introduza o numero %2d : ", ++i);
        scanf(" %d", &val);
        if (val > max)
            max = val;
        if (min > val)
            min = val;
    } while (i < 10);
    printf("\n");
    printf("Menor numero inserido: %d.\n", min);
    printf("Maior numero inserido: %d.\n\n", max);
}