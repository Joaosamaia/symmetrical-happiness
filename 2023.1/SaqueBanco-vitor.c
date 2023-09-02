#include <stdio.h>
int main() {
    int saque, ced100, ced50, ced20, ced10, ced5, ced2, ced1, cond=1;
    while (cond==1){
        printf("Qual o valor do saque? ");
        scanf("%d", &saque);
    
        ced100 = saque/100;
        saque = saque%100;
        ced50 = saque/50;
        saque = saque%50;
        ced20 = saque/20;
        saque = saque%20;
        ced10 = saque/10;
        saque = saque%10;
        ced5 = saque/5;
        saque = saque%5;
        ced2 = saque/2;
        saque = saque%2;
        ced1 = saque/1;
        saque = saque%1;
        
        printf("\nNumero de cedulas de 100: %d\nNumero de cedulas de 50: %d\nNumero de cedulas de 20: %d\nNumero de cedulas de 10: %d\nNumero de cedulas de 5: %d\nNumero de cedulas de 2: %d\nNumero de cedulas de 1: %d\n\n", ced100, ced50, ced20, ced10, ced5, ced2, ced1);
    }
    
    return 0;
}