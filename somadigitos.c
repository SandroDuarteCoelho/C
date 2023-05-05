#include <stdio.h>

int main ()
{
    int n, quociente, soma;

    soma=0;
	printf ("Cálculo da soma do quadrado dos digitos de um número");
	printf ("\nIndique um numero:");
	scanf ("%d", &n);
	do
	{
         quociente=n/10;
         soma=soma+(quociente*10-n)*(quociente*10-n);
         printf ("\nn= %d; Soma= %d", n, soma);
         n=quociente;
     	}
     	while (n>=1);
         
     system ("pause");
}