// Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.
#include <stdio.h>
    int main(){
        int array[5];
        int *ptr = NULL;

        ptr = array;

        for(int i = 0; i < 5; i++){
            printf("Digite o valor para o elemeto %d: ", i);
            scanf("%d", (ptr + i)); // após o primeiro irá pular 4 bytes
        }

        for( int i = 0; i < 5; i++){
            printf("O dobro do valor do elemento %d eh: %d\n", i, 2 * *(ptr + i)); // primeiro * multiplicação, segundo * valor contido na posição de memória
        }

        return 0;


    }