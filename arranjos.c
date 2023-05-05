#include <stdio.h>

int main ()
{
    int n, r, i, resultado;

        
	printf ("Cálculo dos arranjos de N, R a R:");
	printf ("\nIndique valor de N:");
	scanf ("%d", &n);
	printf ("\nIndique valor de R:");
	scanf ("%d", &r);
	i=n-r+1;
	resultado=1;
	while (i<=n)
	{
	    resultado=resultado*i;
	    printf ("\ni=%d; arranjos=%d, ",i, resultado);
	    i=i+1;

 	}
      
	system ("pause");
}