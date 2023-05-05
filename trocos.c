#include <stdio.h>

int main ()
{
    double n;
    int deuro=0, euro=0, cinquenta=0, vinte=0, dez=0, cinco=0, dois=0, um=0;


	printf ("Introduza um montante em euros, podendo ter centimos:");
	scanf ("%lf", &n);

	printf ("\nvalor=%lf",n);
	
	while (n>=2)
    {
        deuro=deuro+1; 
        n=n-2;      
    }    
    printf ("\n2 euros=%d",deuro);
    printf ("\nsobra=%lf\n",n);

	while (n>=1)
    {
        euro=euro+1; 
        n=n-1;      
    }    
    printf ("\n1 euros=%d",euro);
    printf ("\nsobra=%lf\n",n);
     
    if (n>0.5) 
    {
        cinquenta=1;
        printf ("\n50 centimos=%d",cinquenta);
        n=n-0.5;
        printf ("\nsobra=%lf\n",n);
    }    
    
    while (n>=0.2)
    {
        vinte=vinte+1; 
        n=n-0.2;      
    }
    printf ("\n20 centimos=%d",vinte);
    printf ("\nsobra=%lf\n",n);
        
    if (n>0.1) 
    {
        dez=1;
        printf ("\n10 centimos=%d",dez);
        n=n-0.1;
        printf ("\nsobra=%lf\n",n);
    }    
    
    if (n>0.05) 
    {
        cinco=1;
        printf ("\n5 centimos=%d",cinco);
        n=n-0.05;
        printf ("\nsobra=%lf\n",n);
    }    
    
    while (n>0.02)
    {
        dois=dois+1; 
        n=n-0.02;      
    }
    printf ("\n2 centimos=%d",dois);
    printf ("\nsobra=%lf\n",n);
        
    
    if (n>0.01) 
    {
        um=1;
        printf ("\n1 centimo=%d",um);
        n=n-0.01;
        printf ("\nsobra=%lf\n",n);
    }    
       

	system ("pause");
}