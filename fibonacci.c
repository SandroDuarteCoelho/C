#include <stdio.h>

int main ()
{
    int n, i, anterior, soma, mem;

    soma=3;
    anterior=2;
	printf ("Cálculo do valor da função fibonacci");
	printf ("\nIndique um numero:");
	scanf ("%d", &n);
	
    i=3;     
    while (i<=n)
    {
       printf ("\nfib(%d)= %d", i, soma);
       i=i+1;
       mem=soma;
       soma=soma+anterior;
       anterior=mem;
    }    
         
    // system ("pause");
}