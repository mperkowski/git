#include <stdio.h>
#include <stdlib.h>

int main() 

{
  int a, b, wynik=0;
	printf("podaj 1 liczbe\n");
	scanf("%i", &a);
	printf("podaj druga liczbe\n");
	scanf("%i", &b);
	
	for(; a<=b; a++)
	{
		wynik=wynik + a*a;
	}
	printf("wynik jest rowny %i", wynik);
}
