//6. Faça um programa que leia números do teclado e os armazene em um vetor alocado dinamicamente. O usuário irá digitar uma sequência de números, sem limite de quantidade. Os números serão digitados um a um e, sendo que caso ele deseje encerrar a entrada de dados, ele irá digitar o número ZERO. Os dados devem ser armazenados na memória deste modo:
//a. Inicie com um vetor de tamanho 10 alocado dinamicamente; 
//b. Caso o vetor alocado esteja cheio, realoque o vetor do tamanho adicionado espaço para mais 10 valores (tamanho N+10, onde N inicia com 10);

#include <stdio.h>
#include <stdlib.h>
    int main(){
        int *vetor;
        int tamanho = 10;
        int num = 0;
        int *pont_num;
        pont_num = &num;
        int contador = 0;

        vetor = (int *)malloc(tamanho * sizeof(int));
        if(vetor == NULL){
            printf("Erro ao alocar memoria!\n");
            return 1;
        }

        printf("Digite os numeros inteiros desejados (digite 0 para sair):\n");

        while(1){//true
            printf("Numero: ");
            scanf("%d", pont_num);

            if(*pont_num == 0){
                break;
            }

            if(contador == tamanho){
                tamanho += 10;
                vetor = (int *)realloc(vetor, tamanho * sizeof(int));
                if(vetor == NULL){
                    printf("Erro ao realocar memória!\n");
                    return 1;
                }
            }

            *(vetor + contador) = num;
            contador++;
        }

        printf("Numeros digitados:\n");
        for(int i = 0; i < contador; i++){
            printf("%d ", *(vetor+i));
        }
        printf("\n");

        free(vetor);

        return 0;
    }