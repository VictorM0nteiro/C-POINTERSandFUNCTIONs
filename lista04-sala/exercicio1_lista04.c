//1. Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimensões definidas pelo usuário e a leia. Em seguida, incremente com um código que receba um valor inteiro do usuário, retorne “Existe” caso o valor esteja na matriz ou retorne “Não Existe” caso não esteja na matriz.
#include <stdio.h>
#include <stdlib.h>
    int main(){
        int linhas, colunas, valor, encontrado = 0;

        printf("Digite o numero de linhas: ");
        scanf("%d", &linhas);
        printf("Digite o numero de colunas: ");
        scanf("%d", &colunas);

        int **matriz;
        matriz = (int **)malloc (linhas*sizeof(int));

        matriz[0] = malloc(linhas*colunas*sizeof(int));

        printf("Digite os elementos da matriz:\n");
        for(int i = 0; i < linhas; i++){
            for(int j = 0; j < colunas; j++){
                printf("Elemento [%d][%d]:", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }

        printf("Digite o valor que deseja procurar na matriz: ");
        scanf("%d", &valor);

        for(int i = 0; i < linhas; i++){
            for(int j = 0; j < colunas; j++){
                if(matriz[i][j] == valor){
                   encontrado = 1;
                   break; 
                }
            }
            if(encontrado) break;
        }
        if(encontrado == 1){
            printf("Existe\n");
        }
        else{
            printf("Não existe\n");
        }

        for(int i = 0; i < linhas; i++){
            free(matriz[i]); // duas liberações necessárias na alocação de matrizes
        }
        free(matriz); // duas liberações necessárias na alocação de matrizes


    }
