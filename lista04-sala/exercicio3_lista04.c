//3. Faça um programa que:
// e Peça para o usuário entrar com o nome e a posição (coordenadas X e Y) de N cidades e as armazene em um vetor de estruturas (N e informado pelo usuário);
// e Crie uma matriz de distâncias entre cidades de tamanho N x N;
// e Calculea distância entre cada duas cidades e armazene na matriz;
// e Exiba na tela a matriz de distancias obtida;
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    typedef struct 
    {
        char nome_cidade[50];
        float x;
        float y;
    } Cidade;

    float calcularDistancia(Cidade c1, Cidade c2){
        return sqrt(pow(c2.x - c1.x, 2) + pow (c2.y - c1.y, 2));
    }

    int main(){
        int nmr_cidades;
        printf("Digite o numero de cidades: ");
        scanf("%d", &nmr_cidades);

        Cidade *cidades;
        cidades = (Cidade *)malloc(nmr_cidades*sizeof(Cidade));

        if(cidades == NULL){
            printf("Erro de alocação!\n");
            return 1;
        }

        for(int i = 0; i < nmr_cidades; i++){
            printf("Digite o nome da cidade %d: ", i+1);
            scanf("%s", cidades[i].nome_cidade);
            printf("Digite a coordenada X da cidade %d: ", i+1);
            scanf("%f", &cidades[i].x);
            printf("Digite a coordenada Y da cidade %d: ", i+1);
            scanf("%f", &cidades[i].y);
        }

        //alocação da matriz da distancia nXn
        float **distancias = (float**)malloc(nmr_cidades*sizeof(float*));
        for(int i = 0; i < nmr_cidades; i++){
            distancias[i] = (float*)calloc(nmr_cidades, sizeof(float));
        }

        if(distancias == NULL){
            printf("Erro ao alocar memoria para as matrizes!\n");
            free(cidades);
            return 1;
        }

        //calcular a distancia com a função de mesmo nome
        for(int i = 0; i < nmr_cidades; i++){
            for(int j = 0; j < nmr_cidades; i++){
                distancias[i][j] = calcularDistancia(cidades[i], cidades[j]);
            }
        }
        printf("\n");

        printf("Matriz de distancias\n");
        for(int i = 0; i < nmr_cidades; i++){
            for( int j = 0; i < nmr_cidades; j++){
                printf("%.2f", distancias[i][j]);
            }
            printf("\n");
        }

        for(int i = 0; i < nmr_cidades; i++){
            free(distancias[i]);
        }
        free(distancias);
        free(cidades);

        return 0;

    }
    