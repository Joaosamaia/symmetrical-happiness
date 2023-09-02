#include <stdio.h>
#include <conio.h>

int
main ()
{
  printf("Olá!\nCom esse programa você pode obter uma tabuada de um à dez para qualquer número com até duas casas décimais!\n");
  int a = 0;
  float b;
  printf ("digite um nùmero: "); scanf ("%f", &b);
  int c = 0;

  do
    {
      a++;
      c = a * b;
      printf ("%dx%.2f é: %d\n", a, b, c);
    }
  while (a < 10);


  getch ();
}
