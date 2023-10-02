#include <stdio.h>
void Fib(int n){    
    static int a = 0, b = 1, x;    
    if(n > 0){    
        x = a + b;
        printf(", %d", x);
        a = b;    
        b = x;    
        Fib(n-1);   
    }
}    
int main(){
    int y;    
    printf("Digte o numero: "); scanf("%d", &y);    
    printf("sequencia Fibonacci: %d, %d", 0, 1);  
    Fib(y-2); printf(".");
return 0;
}