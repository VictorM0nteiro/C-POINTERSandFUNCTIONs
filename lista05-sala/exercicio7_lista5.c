//7. Faça uma função chamada DesenhaLinha. Ele deve desenhar uma linha na tela usando vários símbolos de igual (Ex: ========). A função recebe por parâmetro quantos sinais de igual sequenciais serão mostrados.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fazendoh_linha(int a);

int main(){
    int x;
    printf("Qual o tamanho da linha desejada: ");
    scanf("%d", &x);
    //float resultado;
    fazendoh_linha(x);
    return 0;
}

int fazendoh_linha(int a){
    for(int i = 0; i < a; i++){
        printf("=");
    }
    printf("\n");
}