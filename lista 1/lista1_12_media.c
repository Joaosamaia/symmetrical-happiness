#include <stdio.h>
int main(){
    int a = 0, b = 0, c = 0; printf("digite os tres primeiros numeros: "); scanf("%d %d %d", &a, &b, &c);
    int d = 0, e = 0, f = 0;; printf("digite os outros tres numeros: "); scanf("%d %d %d", &d, &e, &f);
    float med1; med1 = (a + b + c)/3;    float med2; med2 = (d + e + f)/3;
    float sum; sum = med1 + med2;    float med; med = (med1 + med2)/2;
    printf("A media dos tres primeiros numeros  tem valor: %.2f.\nA media dos outros tres numeros tem valor: %.2f.\nA soma das medias tem valor: %.2f\nA media das medias tem valor %.2f",med1, med2, sum, med);
    return 0;   }