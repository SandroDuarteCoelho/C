/* Escreva em programa na linguagem C que calcule a área de um polígonos. Inicialmente o operador deve escolher o tipo de polígono que pretende calcular
 1 – quadrado
 2 - retângulo
 3 – triangulo
 4 - circulo.
 5 - pentagono
 6 - hexagono
 0 – fim do programa
 No caso de escolher Zero sai do programa, no caso de escolher 1, 2 ou 3 o programa pede-lhe os dados necessários e mostra o resultado do cálculo respetivo. */

#include <stdio.h>
#define PI 3.14 // define uma constante
void main()
{
    int x;
    float valor1, valor2;
    puts("1 - quadrado");
    puts("2 - retangulo");
    puts("3 - triangulo");
    puts("4 - circulo");
    puts("5 - pentagono");
    puts("6 - hexagono");
    puts("0 - fim do programa");
    printf("Escolha uma opcao:");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("Insira o valor lado 1: ");
        scanf("%f", &valor1);
        printf("Insira o valor lado 2: ");
        scanf("%f", &valor2);
        if (valor1>0 && valor2>0)
                printf("O valor da area do quadrado: %.2f", valor1 * valor2);
        else puts("Medidas inválidas.");
        break;

    case 2:
        printf("Insira o valor lado 1: ");
        scanf("%f", &valor1);
        printf("Insira o valor lado 2: ");
        scanf("%f", &valor2);
        if (valor1>0 && valor2>0)
            printf("O valor da area do retangulo: %.2f", valor1 * valor2);
        else puts("Medidas inválidas.");
        break;
    case 3:
        printf("Insira o valor da base: ");
        scanf("%f", &valor1);
        printf("Insira o valor da altura: ");
        scanf("%f", &valor2);
        if (valor1>0 && valor2>0)
            printf("O valor da area do triangulo: %.2f", (valor1 * valor2) / 2);
        else puts("Medidas inválidas.");
        break;
    case 4: 
        printf("Insira o valor do raio: ");
        scanf("%f", &valor1);
        if (valor1>0)
            printf("O valor da area do circulo: %.2f", valor1 * valor1 * PI);
        else puts("Medidas inválidas.");
        break;
    case 5:
        printf("Insira o valor do perimetro: ");
        scanf("%f", &valor1);
        printf("Insira o valor da apotema: ");
        scanf("%f", &valor2);
        if (valor1>0 && valor2>0)
            printf("O valor da area do pentagono: %.2f", (valor1 * valor2) / 2);
        else puts("Medidas inválidas.");
        break;
    case 6:
        printf("Insira o comprimento do lado: ");
        scanf("%f", &valor1);
        if (valor1>0)
            printf("O valor da area do hexagono: %.2f", (valor1 * valor2) / 2);
        else puts("Medidas inválidas.");
        break;
    case 0:
        puts("FIM");
    default:
        printf("Opcao invalida.");
        break;
    }
}