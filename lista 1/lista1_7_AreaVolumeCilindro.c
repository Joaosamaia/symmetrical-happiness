#include <stdio.h>
#include <math.h>
int main(){
    float r = 0; printf("digite o raio do cilindro: "); scanf("%f", &r);
    float h = 0; printf("digite a altura do cilindro: "); scanf("%f", &h);
    float area; area = 2*M_PI * r *(h+r);    float vol; vol = M_PI*r*r*h;
    printf("A area e o volume do cilindro de raio %.2fcm e altura %.2fcm sao, respectivamente:\nArea: %.2fcm2\nVolume: %.2fcm3", r, h, area, vol);
    return 0;   }