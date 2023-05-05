/*20.2 Faça um programa que calcule e mostre a soma de N números considerados, pares ou impares conforme a escolha do utilizador. Repetir a ação até que escolha abandonar o programa.
O valor N será definido pelo utilizador Os valores serão inseridos pelo utilizador. O programa ignora os numeros pares que por engano forem inseridos.*/

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
void main()
{
    int tipo, n, soma = 0, contaValores = 0, todos = 0, valor;

    do
    {
        printf("Quer somar valores (1)pares, (2)impares, (0)Sair: ");
        scanf("%d", &tipo);

        if (tipo != 0)
        {
            printf("Quantos valores queres somar: ");
            scanf("%d", &n);

            while (contaValores < n)
            {
                printf("Insira um valor:");
                scanf(" %d", &valor);
                if (tipo == 1)
                {
                    if (valor % 2 == 0)
                    {
                        soma += valor;
                        contaValores++;
                    }
                }
                else
                {
                    if (valor % 2 == 1)
                    {
                        soma += valor;
                        contaValores++;
                    }
                }

                todos++;
            }
             printf("Inseriu %d valores. \nDos quais %d foram ignorados. \nA soma dos %d valores inseridos é %d.\n", todos, todos - contaValores, n, soma);
             soma = 0, contaValores = 0, todos = 0;
        }
        
    } while (tipo != 0);
   
}