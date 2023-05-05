/*22.	Elabore um algoritmo que depois de receber o nome do utilizador, com base num vetor que permite guardar 10 valores reais, permita as seguintes opções:
1 – Receber valores e guardar no vetor
2 - Mostrar os valores do vetor
3 – Mostrar a média dos valores do vetor
4 – Mostrar a soma dos valores do vetor
0 – Sair
Até que opção escolhida seja Zero
Opções diferentes de 0 … 6 devem ser ignoradas

Nota:
    Mostre sempre o nome do utilizador antes da informacão solcitada.
Exemplo para a opção 3:
    Sr. Pedro, a média dos valores é = 123,5
*/

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

int menu()
{
    int opcao;
    printf("\n\t\tMENU\n");
    printf("\n1 - Receber valores e guardar no vetor");
    printf("\n2 - Mostrar os valores do vetor");
    printf("\n3 - Mostrar a média dos valores do vetor");
    printf("\n4 - Mostrar a soma dos valores do vetor");
    printf("\n0 - Sair");
    printf("\n Opção :");
    scanf(" %d", &opcao);
    return opcao;
}

void main()
{
    int op;
    float arrReal[10], soma;
    char nome[10];

    printf("Insira o seu nome: ");
    scanf(" %s", nome);
    printf("Seja bem-vindo, %s\n", nome);
    do
    {
        op = menu(); // chamada função menu e atribui a op o valor dessa função
        switch (op)
        {
        case 1:
            soma = 0;
            for (int i = 0; i < 10; i++)
            {
                printf("\nSr(a). %s, insira o %dº valor: ", nome, i + 1);
                scanf(" %f", &arrReal[i]);
                soma += arrReal[i]; // embora não seja pedido para agora, aproveita o ciclo for para ir somando os valores do array
            }
            break;
        case 2:
            printf("Sr(a). %s, os valores guardados são:\n", nome);
            for (int i = 0; i < 10; i++)
                printf("%f ", arrReal[i]);
            break;
        case 3:
            printf("Sr(a). %s, a média dos valores é = %f", nome, soma / 10);
            break;
        case 4:
            printf("Sr(a). %s, a soma dos valores guardados é = %f", nome, soma);
            break;
        case 0:
            printf("Adeus, Sr(a). %s", nome);
            break;
        }

    } while (op != 0);
}
