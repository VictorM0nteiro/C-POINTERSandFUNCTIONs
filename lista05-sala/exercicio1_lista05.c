//1. Crie uma função que recebe como parâmetro um número inteiro e retorne o seu dobro.

#include <stdio.h>
#include <stdlib.h>

    int retorna_dobro(int a);

    int main(){
        int x;
        printf("Declare uma variavel: ");
        scanf("%d", &x);

        int resultado;
        resultado = retorna_dobro(x);

        printf("%d eh o dobro\n", resultado);

        return 0;
    }

    int retorna_dobro(int a){
        return a*2;
    }