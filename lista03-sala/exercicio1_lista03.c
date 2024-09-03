//1. Crie um programa que: a. Aloque dinamicamente um vetor de 5 números inteiros b. Peça para o usuário digitar os 5 números no espaço alocado c. Mostre natela os 5 números d. Libere a memória alocada.

#include <stdio.h>
#include <stdlib.h>
    int main(){
        int *arr;
        int i;

        arr = (int*)malloc(5 * sizeof(int));// alocar dinamicamente 5
        if(arr == NULL){
            printf("Erro na alocacao de memoria\n");
            
        }

        printf("Digite 5 numeros inteiros\n");
        for(int i = 0; i < 5; i++){
            scanf("%d", arr+i); // aritmetica de ponteiros
        }

        printf("\nOs numeros sao:\n");

        for(int i = 0; i < 5; i++){
            printf("%d\n", *(arr+i));
        }

        free(arr);


    }