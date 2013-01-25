#include <stdio.h>
#include <math.h>

void deltoid(a, b, c, x1, x2, dzielnik);


  int main()
{

	int a, b, c;
		
		scanf("%d %d %d", &a,  &b , &c);
		
		deltoid(a, b, c);

}

void deltoid(a,b, c, x1, x2, dzielnik)
	{
		int delta;
		
		delta = (b*b - 4*a*c);
		dzielnik = 2 * a;
		x1 = (-b + sqrt(delta))/dzielnik;
		x2 = (-b - sqrt(delta))/dzielnik;
			
			 if (delta > 0 )
		 	{	
			printf("Delta wynosi %d\n x1 = %d x2 = %d\n", delta, x1, x2);
			}	
				
				else if (delta == 0)
				{
				x1 = (-b/dzielnik);
				printf("Delta = %d -->> jeden pierwiastek\n x1 wynosi %d", delta,  x1);
				}
					
					else 
					{
						printf("brak pierwiastkow");
					}
	}	
