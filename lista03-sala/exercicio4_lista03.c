//4. Faça um programa para armazenar em memoria um vetor de dados contendo 1500 valores do tipo int, usando a função de alocação dinâmica de memória CALLOC: a. Atribua para cada elemento do vetor o valor do seu índice. b. Exibirnatela os 10 primeiros e os 10 últimos elementos do vetor.

#include <stdio.h>
#include <stdlib.h>
    int main(){
        int *vetor;
        int tamanho = 1500;
        int *pont_tamanho;
        pont_tamanho = &tamanho;

        vetor = (int *)calloc(*pont_tamanho, sizeof(int));
        if(vetor == NULL){
            printf("Erro na alocacao de memoria");
            return 1;
        }

        for (int i = 0; i < tamanho; i++) {
            *(vetor + i) = i;
        }

        //10 primeiros numeoros
        printf("Os 10 primeiros numeros:\n");
        for(int i = 0; i < 10; i++){
            printf("%d ", *(vetor+i));
        }
        printf("\n");

        printf("Os 10 ultimos numeros:\n");
        for(int i = tamanho -10; i < tamanho; i++){
            printf("%d ", *(vetor+i));
        }

        free(vetor);

        return 0;
    }