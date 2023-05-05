#include <stdio.h>

int main ()
{
    int n, resultado;
        
	printf ("Qual o produto dos primeiros n números");
	printf ("\nIndique valor de n:");
	scanf ("%d", &n);
	resultado=n;
 	while (n>1)
 	{
 	    resultado=resultado*(n-1);
 	    n=n-1;    
    	}  
	
	printf ("\nResultado = %d\n", resultado);
		
	
	system ("pause");
}