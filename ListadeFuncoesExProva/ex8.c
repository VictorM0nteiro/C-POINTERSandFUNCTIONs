// 08 - Desenvolva um programa que leia a dimensão MxN de uma matriz e os valores
// min e max. Em seguida, o programa principal utiliza uma função para gerar a matriz
// MxN com valores aleatórios dentro de um intervalo [min, max]. Uma outra função
// deve receber a matriz gerada e retornar o maior elemento da matriz, o menor
// elemento da matriz e o valor médio das entradas da matriz.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void gerarMatriz(int **matriz, int M, int N, int min, int max) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = min + rand() % (max - min + 1);
        }
    }
}


void analisarMatriz(int **matriz, int M, int N, int *menor, int *maior, float *media) {
    int soma = 0;
    *menor = matriz[0][0];
    *maior = matriz[0][0];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            int valor = matriz[i][j];
            soma += valor;

            if (valor < *menor) {
                *menor = valor;
            }
            if (valor > *maior) {
                *maior = valor;
            }
        }
    }

    *media = (float)soma / (M * N);
}

int main() {
    int M, N, min, max;
    int menor, maior;
    float media;

 
    srand(time(NULL));


    printf("Digite o número de linhas (M): ");
    scanf("%d", &M);
    printf("Digite o número de colunas (N): ");
    scanf("%d", &N);
    printf("Digite o valor mínimo do intervalo: ");
    scanf("%d", &min);
    printf("Digite o valor máximo do intervalo: ");
    scanf("%d", &max);

    int **matriz = (int **)malloc(M * sizeof(int *));
    for (int i = 0; i < M; i++) {
        matriz[i] = (int *)malloc(N * sizeof(int));
    }


    gerarMatriz(matriz, M, N, min, max);


    printf("Matriz gerada:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    
    analisarMatriz(matriz, M, N, &menor, &maior, &media);


    printf("Menor elemento: %d\n", menor);
    printf("Maior elemento: %d\n", maior);
    printf("Valor médio dos elementos: %.2f\n", media);

    for (int i = 0; i < M; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
