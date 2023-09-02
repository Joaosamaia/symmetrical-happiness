#include <stdio.h>
int main(){
    float a = 0; printf("digite o valor para A: "); scanf("%f", &a);
    float b = 0; printf("digite o valor para B: "); scanf("%f", &b);
    printf("O valor incial de A e: %.2f. O valor incial de B e: %.2f\n", a, b);
    float c; c = a; a = b; b = c;
    printf("Ao trocar, obtemos:\nA = %.2f\nB = %.2f",a, b);
    return 0;   }