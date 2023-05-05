#include <stdio.h>

int main ()
{
	printf ("Olá Mundo!");
	printf ("\nsizeof(char): %d", sizeof(char));
	printf ("\nsizeof(short): %d", sizeof(short));
	printf ("\nsizeof(int): %d", sizeof(int));
	printf ("\nsizeof(long): %d", sizeof(long));
	printf ("\nsizeof(long long): %d", sizeof(long long));
	printf ("\nsizeof(float): %d", sizeof(float));
	printf ("\nsizeof(double): %d", sizeof(double));
	printf ("\nsizeof(long double): %d", sizeof(long double));
	printf ("\nA soma dos tamanhos dos tipos pedidos compilado no tcc é: %d",sizeof(char)+sizeof(short)+sizeof(int)+sizeof(long)+sizeof(long long)+sizeof(float)+sizeof(double)+sizeof(long double));
	system ("pause");
}