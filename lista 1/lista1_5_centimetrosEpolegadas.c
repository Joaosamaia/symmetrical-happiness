#include <stdio.h>
int main(){
    float cm; printf("digite a quantidade de centimetros a ser convertido: "); scanf("%f", &cm);
    float pol = 1/2.54f;
    printf("%.2f centimetros equivalem a %.2f polegadas.", cm, cm*pol);
    return 0;   }