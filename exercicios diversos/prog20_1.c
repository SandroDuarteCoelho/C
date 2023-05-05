/*20.1 Faça um programa que calcule e mostre a soma de N números impares.  O valor N será definido pelo utilizador Os valores serão inseridos pelo utilizador. O programa ignora os numeros pares que por engano forem inseridos.*/

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
void main()
{
    int n, soma = 0, contaImpares = 0, todos=0, valor;
    printf("Quantos valores impares queres somar: ");
    scanf("%d", &n);

    while (contaImpares < n)
    {
        printf("Insira um valor impar:");
        scanf(" %d", &valor);
        if (valor % 2 == 1)
        {
            soma += valor;
            contaImpares++;
        }
        todos++;
    }
    printf("Inseriu %d valores. \nDos quais %d foram ignorados. \nA soma dos %d impares inseridos é %d.", todos, todos-contaImpares, n, soma);
}