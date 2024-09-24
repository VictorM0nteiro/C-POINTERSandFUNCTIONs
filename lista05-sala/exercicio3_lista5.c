//3. Faça uma função que recebe um inteiro positivo e retorne 1 se o número for par e O se for ímpar.
#include <stdio.h>
#include <stdlib.h>
int imp_ou_par(int a);
int main(){
    int x;
    printf("Digite uma variavel: ");
    scanf("%d", &x);

    int resultado;
    resultado = imp_ou_par(x);

    if( resultado == 1){
        printf("Par, %d\n", x);
    }
    else{
        printf("Impar, %d\n", x);
    }

    return 0;


}

int imp_ou_par(int a){
    if( a % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}