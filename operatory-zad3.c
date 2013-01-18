#include <stdio.h>
#include <stdlib.h>

int main() 

{
  int a, n, wynik=0;
	printf("podaj pierwsza liczbe\n");
	scanf("%i", &a);
	printf("podaj druga liczbe\n");
	scanf("%i", &n);
	
	for(; a<=n; a++)
	{
		wynik=wynik + a;
	}
	printf("wynik jest rowny %i", wynik);
}
