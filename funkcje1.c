// zadanie 1 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double a,b,c;
double przeciwprostokatna(double a, double b)
{
  a=a*a;
  b=b*b;
  return  c =(sqrt(a+b)); 
 
}

int main ()
{
printf ("podaj a i b:  "); 
scanf("%lf %lf", &a , &b);



 przeciwprostokatna(a,b);

printf ("przeciwprostokatna = %lf", c);
printf("\n \n");
 return 0;
}

