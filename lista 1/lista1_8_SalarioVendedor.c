#include <stdio.h>
#include <math.h>
int main(){
    float s = 0; printf("digite o salario do vendedor: R$"); scanf("%f", &s);
    float v = 0; printf("digite o total de vendas efetuadas pelo vendedor: R$"); scanf("%f", &v);
    float sala; sala = s + v*(0.15f);
    printf("Salario fixo: R$%.2f\nSalario final (com comissao): R$%.2f", s, sala);
    return 0;   }