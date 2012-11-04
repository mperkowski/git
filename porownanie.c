
#include <stdio.h>
void wczytaj_int(char *prompt, int *x); 
int main()
{
  int  licz1, licz2, wieksza;

  wczytaj_int("podaj pierwsza liczbe: ", &licz1);
  wczytaj_int("podaj druga liczbe: ", &licz2);

  if (licz1 > licz2)
    wieksza = licz1;

  else 
    wieksza = licz2;

  printf("wieksza liczba to %d\n", wieksza);

  return 0;

}


void wczytaj_int(char *prompt, int *x) 
{
  printf("%s", prompt);
  scanf("%d", x);
}
