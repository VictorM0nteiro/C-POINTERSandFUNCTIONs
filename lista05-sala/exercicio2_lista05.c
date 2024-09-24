// 2. Faça uma função para verificar se um número e positivo ou negativo. Sendo que o valor de retorno será 1 se positivo, -1 se negativo e 0 se for igual a O.

#include <stdio.h>
#include <stdlib.h>
int posi_ou_neg(int a);
int main(){
    int x;
    printf("Digite uma variavel: ");
    scanf("%d", &x);

    int resultado;
    resultado = posi_ou_neg(x);

    if( resultado == 1){
        printf("Positivo, %d\n", x);
    }
    else if( resultado == -1){
        printf("Negativo, %d\n", x);
    }
    else{
        printf("Eh 0!\n");
    }

    return 0;


}

int posi_ou_neg(int a){
    if( a > 0){
        return 1;
    }
    else if(a < 0){
        return -1;
    }
    else{
        return 0;
    }
}