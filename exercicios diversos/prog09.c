#include <stdio.h>
void main()
{
    int x;
    float y;
    printf ("Insira um valor inteiro: ");
    scanf("%d", &x);
    printf ("Insira um valor real: ");
    scanf("%f", &y);
    printf ("O valor inteiro foi %d, e o real foi %.1f", x, y);
}