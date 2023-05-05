#include <stdio.h>

int main ()
{
    int n;
    int soma=0;
    
	printf ("Indique um numero inteiro:");
	scanf ("%d", &n);	
	do
	{	
	  soma = soma + n;
	  n = n-1;
	}
	while (n>=1);
	printf ("\nsoma dos primeiros numeros inteiros = %d\n", soma);

	system ("pause");
}