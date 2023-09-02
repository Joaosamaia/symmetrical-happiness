#include <stdio.h>
int main(){
    // se quiser q rode pra sempre, adiciona um while (true) {} aqui <-
    int saldo = 0; printf("digite o saldo: "); scanf("%d", &saldo);
    int cem = 0, cinq = 0, v = 0, d = 0, c = 0, dois = 0, um = 0;
    while (saldo > 1) {
        if (saldo >=100) {
            cem = saldo / 100;
            saldo = saldo % 100;    }
        if (saldo >= 50) {
            cinq = saldo / 50;
            saldo = saldo % 50;    }
        if (saldo >= 20) {
            v = saldo / 20;
            saldo = saldo % 20;    }
        if (saldo >= 10) {
            d = saldo / 10;
            saldo = saldo % 10;    }
        if (saldo >= 5) {
            c = saldo / 5;
            saldo = saldo % 5;    }
        if (saldo >= 2) {
            dois = saldo / 2;
            saldo = saldo % 2;    }
        if (saldo >= 1) {
            um = um + 1;
            saldo = saldo - 1;    }
        }
    printf("a quantidade de cada cedula, sera: \n%d nota(s) de cem reais, %d nota(s) de cinquenta reais, %d nota(s) de vinte reais,\n %d nota(s) de dez reais, %d nota(s) de cinco reais, %d nota(s) de dois reais, %d nota(s) de um real.", cem, cinq, v, d, c, dois, um);
    return 0;   }