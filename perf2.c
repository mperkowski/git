#include <stdio.h>
#include <stdlib.h>
int main()
{
int  suma=0, i, j;

for (i=0; i<1000; i++)
{
    suma=0;
    for (j=1; j<i; j++)
    {
      if (i%j == 0)
        {
                 suma=(suma +j);
        }
        
    }

      if (i == suma)
      {
      printf ("%i ", suma);
      }

} 
 	
  return 0;
}
 
