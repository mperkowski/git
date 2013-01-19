 #include <stdio.h>
 #define test 5
 int main()
 {
   int tab[test] = {2,4,15,8,10};
   int n;
   puts ("opis");
 
   for (n=0; n<test; ++n) {
     printf ("Element numer %d = %d\n", n, tab[n]);
   }
   return 0;
 }
