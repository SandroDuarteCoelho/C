#include <stdio.h>

int main ()
{
    int n, r, i, resultado, resultado_final, a;

        
	printf ("Cálculo das combinações de N, R a R:");
	printf ("\nIndique valor de N:");
	scanf ("%d", &n);
	printf ("\nIndique valor de R:");
	scanf ("%d", &r);
	a=1;
	i=n-r+1;
	resultado=1;
	resultado_final=1;
	while (i<=n)
	{
	    resultado=resultado_final*i;
	    printf ("\n%d*%d=%d / %d = %d",resultado_final, i, resultado, a, (resultado_final*i)/a);
	    resultado_final=(resultado_final*i)/a;
	    i=i+1;
	    a=a+1;
 	}
      
	
	scanf ("%d");	
//	system ("pause");
}