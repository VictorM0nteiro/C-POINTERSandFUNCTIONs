//2. Faça um programa que leia do usuário o tamanho de um vetor (inteiros) a ser lido e faça a sua alocação dinâmica de memória. Depois, leia do usuário seus valores e imprima o vetor lido e mostre quantos dos números são pares e quantos são impares.

#include <stdio.h>
#include <stdlib.h>
    int main(){
        int sizeArr;
        int *pont_sizeArr;
        pont_sizeArr = &sizeArr;

        printf("Digite o tamanho do vetor desejado: ");
        scanf("%d", pont_sizeArr);

        int *arr;

        arr = (int *)malloc(sizeArr * sizeof(int));

        if(arr == NULL){
            printf("Erro na alocacao de memoria\n");
            return 1;
        }

        printf("\nDigite %d numeros inteiros\n", *pont_sizeArr);
        for(int i = 0; i < *pont_sizeArr; i++){
            scanf("%d", arr+i); // aritmetica de ponteiros
        }

        int par = 0;
        int impar = 0;

        for(int i = 0; i < *pont_sizeArr; i++){
            if((int)*(arr+i) % 2 == 0){
                par++;
            }
            else{
                impar++;
            }
        }

        for(int i = 0; i < *pont_sizeArr; i++){
            printf("Numeros lidos %d\n", *(arr+i));
        }
        printf("Quantidade de pares: %d\n", par);
        printf("Quantidade de impares: %d\n", impar);

        free(arr);

        return 0;
    }   