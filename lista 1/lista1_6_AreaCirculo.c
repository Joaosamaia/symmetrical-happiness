#include <stdio.h>
#include <math.h>
int main(){
    float r = 0; printf("digite o raio do circulo: "); scanf("%f", &r);
    float a = M_PI * r*r;
    printf("A area do circulo de raio %.2f e: %.2f", r, a);
    return 0;   }