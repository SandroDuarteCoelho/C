#include <stdio.h>

void main() // se usar "int main()"", no fim "return 0;"
{
    int x;
    x = 15;
    printf("O valor de \"x\" e : %d\n", x);
    printf("O dobro de %d e %d\n", x, 2 * x);

    printf("x = %d  C = %c  y = %d\n", 57, 'A', x * 2);
    printf("x = %d  C = %c  y = %d\n", 45, 65, x * 2); // na tabela aschi 65=A
}