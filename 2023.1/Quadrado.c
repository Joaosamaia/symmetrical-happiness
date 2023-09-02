#include<stdio.h>
#include<conio.h>

int
main ()
{
  int a = 0;
  int b = 0;

  do
    {
      a++;
      b= a * a;
      printf ("o quadrado de %d vale %d \n", a, b);
    }
  while (a < 10);

  getch ();
}