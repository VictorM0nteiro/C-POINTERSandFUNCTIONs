//9. Escreva uma função que gera um triangulo lateral de altura 2*n-1 e n largura.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    void triangulo_lateral(int m);

    int main(){
        int a;
        triangulo_lateral(a);
        return 0;
    }

    void triangulo_lateral(int m){
        int n; 
        printf("Digite o valor de n: ");
        scanf("%d", &n);
        //metade 1
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                printf("*");
            }
            printf("\n");
        }
        //metade2
        for(int i = n; i > 0; i--){
            for(int j = 0; j < i; j++){
                printf("*");
            }
            printf("\n");
        }

    }