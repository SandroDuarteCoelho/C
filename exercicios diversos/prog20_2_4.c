/*20.2 Faça um programa que calcule e mostre a soma de N números considerados, pares ou impares conforme a escolha do utilizador. Repetir a ação até que escolha abandonar o programa.
O valor N será definido pelo utilizador Os valores serão inseridos pelo utilizador. O programa ignora os numeros pares que por engano forem inseridos.*/

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
char menu()
{
    char opcao;
    printf("   MENU\n");
    printf("\nP - Somar pares");
    printf("\nI - Somar impares");
    printf("\nF - Fim");
    printf("\n Opção :");
    scanf(" %c", &opcao);
    return opcao;
}
void main()
{
    int n, soma = 0, contaValidos = 0, valor;
    char parImpar;

    do
    {
        soma = contaValidos = 0;
        parImpar = menu(); // chamada função menu e atribui a parImpar o valor dessa função
        
        if (parImpar == 'P' || parImpar == 'I')
        {
            printf("Quantos valores queres somar : ");
            scanf("%d", &n);

            while (contaValidos < n)
            {
                printf("Insira um valor : ");
                scanf(" %d", &valor);
                if (valor % 2 == 1 && parImpar == 'I')
                {
                    soma += valor;
                    contaValidos++;
                }

                else
                {
                    if (valor % 2 == 0 && parImpar == 'P')
                    {
                        soma += valor;
                        contaValidos++;
                    }
                }

                if (parImpar == 'P')
                    printf("A soma dos %d pares = %d", n, soma);
                else
                    printf("A soma dos %d impares = %d", n, soma);
            }
        }
    } while (parImpar != 'F');
}
