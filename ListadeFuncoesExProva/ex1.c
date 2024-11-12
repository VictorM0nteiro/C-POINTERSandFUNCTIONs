// 01 – Faça uma função que receba 3 números e retorne para o programa principal os
// 3 números em ordem crescente. Mostre o resultado no programa principal.

#include <stdio.h>
#include <stdlib.h>
    void OrdemCrescente(int *a, int *b, int *c){
        if( *a > *b){
            int temp = *a;
            *a = *b;
            *b = temp;
        }
        if(*a > *c){
            int temp = *a;
            *a = *b;
            *c = temp;
        }
        if(*b > *c){
            int temp = *b;
            *b = *c;
            *c = temp;
        }
    }
    int main(){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        printf("Antes de corrigir %d %d %d\n", a, b, c);
        OrdemCrescente(&a, &b, &c);
        printf("Depois de corrigir %d %d %d\n", a, b, c);

        return 0;
    }