//10. Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por exemplo, a saída para n = 6 seria:

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    void triangulo_normal(int n);

    int main(){
        int n; 
        printf("Digite o valor de n: ");
        scanf("%d", &n);
        triangulo_normal(n);
        return 0;
    }

    void triangulo_normal(int n){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n - i; j++){
                printf(" ");
            }
            for(int j = 1; j <= 2 * i-1; j++){
                printf("*");
            }
            printf("\n");
        }

    }