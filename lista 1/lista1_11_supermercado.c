#include <stdio.h>
int main(){
    // se quiser q rode pra sempre, adiciona um while (true) {} aqui <-
    float comp, b;
    printf("digite o valor da compra do cliente: "); scanf("%f", &comp);
    printf("digite o valor pago pelo cliente: "); scanf("%f", &b);
    float troco = b - comp;    int cem = 0, cinq = 0, v = 0, d = 0, c = 0, dois = 0, dc = 0;
    printf("O troco sera dado em: \n");
        if (troco >=100) {
            cem = troco / 100;    troco = troco - cem*100;
            printf("%d nota(s) de cem reais,\n", cem);   }
        if (troco >= 50) {
            cinq = troco / 50;    troco = troco - cinq*50;
            printf("%d nota(s) de cinquenta reais,\n", cinq);    }
        if (troco >= 20) {
            v = troco / 20;    troco = troco - v*20;
            printf("%d nota(s) de vinte reais,\n", v);    }
        if (troco >= 10) {
            d = troco / 10;    troco = troco - d*10;
            printf("%d nota(s) de dez reais,\n", d);    }
        if (troco >= 5) {
            c = troco / 5;    troco = troco - c*5;
            printf("%d nota(s) de cinco reais,\n", c);   }
        if (troco >= 2) {
            dois = troco / 2;    troco = troco - dois*2;
            printf("%d nota(s) de dois reais,\n", dois);    }
        if (troco >= 1) {
            troco = troco - 1;
            printf("1 nota(s) de um real,\n");    }
        if (troco >= 0.5) {
            troco = troco - 0.5;
            printf("1 moeda de cinquenta centavos,\n");    }    
        if (troco >= 0.25) {
            troco = troco - 0.25;
            printf("1 moeda de vinte e cinco centavos,\n");    }
        if (troco >= 0.10) {
            while (troco >= 0.10) {
            dc =  dc + 1;    troco = troco - 0.10;  }
            printf("%d moeda(s) de dez centavos,\n", dc);    }
        if (troco > 0) {
            troco = troco - 0.05;
            printf("1 moeda de cinco centavos.");    }
    return 0;   }