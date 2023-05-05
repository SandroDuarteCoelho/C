#include <stdio.h>
#include <string.h>


int main()
 {
  char str[255], aux;
  int i,  p;

  printf("Introduza uma string: ");
  gets(str);
  printf ("Texto: %s", str);
  printf ("\t %d", strlen(str));

  p=strlen(str);
  for (i=0; i<p; i++)
  {
        aux=str[i]; 
        str[i]=str[p-1];
        str[p-1]=aux;
        p--;
        printf ("\n%d: i:%d %s",p, i, str);
  }              

  	system ("pause");
}