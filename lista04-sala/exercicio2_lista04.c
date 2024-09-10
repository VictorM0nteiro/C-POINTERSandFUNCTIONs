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
        matriz = (int**)malloc(linhas*sizeof(int));
        matriz[0] = malloc (linhas*colunas*sizeof(int));
        for(int i = 0; i < linhas; i++){
            matriz[i]= matriz[0] + i * colunas;
        }

        

        free(matriz[0]);
        free(matriz);
    }