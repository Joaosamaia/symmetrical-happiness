#include <stdio.h>
int main(){
    float prc; printf("digite o preco de fabrica do automovel: "); scanf("%f", &prc);
    float s = prc*(0.45f) + prc*(0.28f);
    printf("o preco final do carro e de R$ %.2f.", prc+s);
    return 0;   }