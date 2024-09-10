//2. Faça um programa que leia dois números N e M e: e —Aloque espaço e leia uma matriz de inteiros Nx M; e —Aloque espaço e construa uma matriz transposta M x N de inteiros. * Mostreasduas matrizes imprimidas na tela. * Localize ostrês maiores números na primeira matriz e mostre a linha e a coluna onde estão.
#include <stdio.h>
#include <stdlib.h>
    int main(){
        int linhas, colunas;
        printf("Digite um numero de linhas: ");
        scanf("%d", &linhas);
        printf("Digite um numero de colunas: ");
        scanf("%d", &colunas);

        //declaração de matriz com alocação
        int **matriz;
        matriz = (int**)malloc(linhas*sizeof(int*));
        if(matriz == NULL){ // não utilizar *
            printf("Erro ao alocar a matriz!\n");
            return 1;
        }

        for(int i = 0;i < linhas; i++){
            matriz[i] = (int*)malloc(colunas*sizeof(int*));
            if(matriz[i] == NULL){
                printf("Erro ao alocar a matriz!\n");
                return 1;
            }
        }
        
        printf("Digite os numeros da matriz: \n");
        for(int i = 0; i < linhas; i++){
            for(int j = 0; j < colunas; j++){
                printf("Elemento [%d][%d]:", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }

        //alocar matriz transposta //////////////////////////////////////////////
        int **matriz_transposta;
        matriz_transposta = (int **)calloc(linhas, sizeof(int*));
        if(matriz_transposta == NULL){// não utilizar *
            printf("Erro ao alocar a matriz!\n");
            return 1;
        }
        for(int i = 0; i < linhas; i++){
            matriz_transposta[i] = (int*)calloc(colunas, sizeof(int *));
            if(matriz_transposta[i] == NULL){
                printf("Erro ao alocar a matriz!\n");
                return 1;
            }
        }

        //construção da matriz transposta
        for(int i = 0; i < linhas; i++){
            for(int j = 0; j < colunas; j++){
                matriz_transposta[j][i] = matriz[i][j];
            }
        }

        //impressão da matriz original
        printf("Impressao da matriz original [linhas][colunas]\n");
        for(int i = 0; i < linhas; i++){
            for(int j = 0; j < colunas; j++){
                printf("%2d ", matriz[i][j]);
            }
            printf("\n");
        }

        //impressão matriz transposta
        printf("Impressao da matriz original [colunas][linhas]\n");
        for(int i = 0; i < colunas; i++){
            for(int j = 0; j < linhas; j++){
                printf("%2d ", matriz_transposta[i][j]);
            }
            printf("\n");
        }

        

        

        for(int i=0; i<linhas; i++){
        free(matriz[i]);
        }
        free(matriz);

        for(int i=0; i<linhas; i++){
        free(matriz_transposta[i]);
        }
        free(matriz_transposta);
        return 0;
    }