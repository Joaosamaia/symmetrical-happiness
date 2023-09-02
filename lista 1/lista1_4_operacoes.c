#include <stdio.h>
int main(){
    int a = 0; printf("digite o primeiro numero: "); scanf("%d", &a);
    int b = 0; printf("digite o segundo numero: "); scanf("%d", &b);
    int soma; soma = a + b;    int subt; subt = a - b;
    int mult; mult = a * b;    int quot; quot = a / b;    int rest; rest = a % b;
    printf("A soma de %d e %d tem valor: %d.\nO produto de %d por %d tem valor: %d\nO quociente entre %d e %d tem valor: %d com resto %d", a, b, soma, a, b, mult, a, b, quot, rest);
    return 0;   }