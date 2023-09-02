#include <stdio.h>
#include <conio.h>

int
main ()
{
  int a=0;
  int b=1;
  int c=0;
  do
    {
      do
	  {
    	a++;
    	c= a*b;
    	printf ("o valor de %dx%d é: %d\n", a, b, c);
      }while (a < 10);
      b++;
      a=0;
    }while (b <= 10);

getch ();
}
