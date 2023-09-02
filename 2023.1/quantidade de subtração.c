#include <stdio.h>
#include <conio.h>

int
main ()
{
  printf("Nesse programa ao inserir dois numeros inteiros,\nsabera quantas vezes pode subtrair o maior pelo menor.\n");
  int a;
  printf("Insira o numero de maior valor: ");scanf("%d", &a);
  int ai = a;
  int b;
  printf("Insira o numero de menor valor: ");scanf("%d", &b);
  int c;

  for (c = 0; a >= b; a=a-b){
      c++;
      
  }
  printf("podemos subtrair %d por %d um total de %d vezes.", ai, b, c);
  if (a>0){
    printf(" Com resto de valor: %d", a);

  }

  getch ();
}
