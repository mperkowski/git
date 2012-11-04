#include<stdio.h>

void hej(void);
void wczytaj_liczbe(char *promptint, int  *k);

int main() { 
	int a; 
	hej();
	wczytaj_liczbe(&a);
	printf("podales liczbe calkowita: %d\n", a);

  return 0;
}

void hej (void){
printf("hello world\n");
}

void wczytaj_liczbe(char *prompt, int *k){
printf(prompt);
scanf("%d", k);
}


