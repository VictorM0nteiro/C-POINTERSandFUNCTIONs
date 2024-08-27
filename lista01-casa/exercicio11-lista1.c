//11. Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e imprima o endereço das posições contendo valores pares.
#include <stdio.h>
    int main(){
        int array[5];
        int *ptr = NULL;

        ptr = array;

        for(int i = 0; i < 5; i++){
            printf("Digite o valor para o elemento %d: ", i);
            scanf("%d", (ptr+i));
        }

        for(int j = 0; j < 5; j++){
            if(*(ptr+j) % 2 == 0){
                printf("Elemento que eh par: %d , seu valor %d e sua posicao de memoria %p\n", j, *(ptr+j), (ptr+j));
            }
        }

        return 0;
    }