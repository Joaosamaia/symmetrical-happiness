#include<stdio.h>    
int main(){    
    int a = 0, b = 1, x, n;    
    printf("Digte o numero: "); scanf("%d", &n);    
    printf("sequencia Fibonacci: %d, %d,", 0, 1);
    for(int i = 2; i < n; i++) {    
        x = a + b; 
        if (i < n - 1) {  
            printf(" %d,", x);   }
        else if (i = n - 1) {
            printf(" %d.", x);    }  
        a = b;    
        b = x;    
    }
return 0;  
}