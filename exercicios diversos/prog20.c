// calcule e mostre a soma de N numeros impares. O valor N, e os outros são inseridos pelo utilizador. O programa ignora os pares inseridos por engano.

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
void main()
{

    int limite, valor, soma=0;
    

    printf("Quantos numeros pretende inserir? ", limite);
    scanf("%d", &limite);

    for (int x = 1; x <= limite; x++)
    {
        printf("Insira o %d valor: ", x);
        scanf("%d", &valor);
        if (valor%2!=0)
            {
            printf("%d \n", valor);
            soma=soma+valor;
            // printf("soma:%d \n", soma);
            }
        else
            --x;
    }
    printf ("A soma é: %d", soma);
}