#include <stdio.h>
int main(){
    int a = 0; printf("digite o primeiro numero: "); scanf("%d", &a);
    int b = 0; printf("digite o segundo numero: "); scanf("%d", &b);
    int quot; quot = a / b;    int rest; rest = a % b;
    printf("O resultado da quociente da divissao entre %d e %d e: %d.\nE o resto da divisao e de: %d", a, b, quot, rest);
    return 0;   }