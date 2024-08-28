<<<<<<< HEAD
//1. Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array.
#include <stdio.h>
    int main(){
        float array[10];
        float *ptr = NULL;

        ptr = array;

        for(int i = 0; i < 10; i++){
            printf("Elemento %d e sua posicao %p\n", i, (ptr+i));
        }
        
        return 0;
=======
//1. Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array.
#include <stdio.h>
    int main(){
        float array[10];
        float *ptr = NULL;

        ptr = array;

        for(int i = 0; i < 10; i++){
            printf("Elemento %d e sua posicao %p\n", i, (ptr+i));
        }
        
        return 0;
>>>>>>> 186293c7a32609b2cb84f694007fb8c7c88cf4ec
    }