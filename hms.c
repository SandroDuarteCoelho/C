#include <stdio.h>

int main ()
{
    int hora, minutos, segundos;
    int soma=0;
    
	printf ("C�lculo do numero de segundos desde o inicio do dia");
	printf ("\nIndique a Hora:");
	scanf ("%d", &hora);
	printf ("\nIndique os minutos:");
	scanf ("%d", &minutos);
	printf ("\nIndique os segundos:");
	scanf ("%d", &segundos);

	minutos=minutos+(60*hora);
	soma=soma+(60*minutos);
	soma=soma+segundos;
	printf ("\nN�mero de segundos desde o inicio do dia = %d\n", soma);
		
	system ("pause");
}