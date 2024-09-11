//3. Faça um programa que:
// e Peça para o usuário entrar com o nome e a posição (coordenadas X e Y) de N cidades e as armazene em um vetor de estruturas (N e informado pelo usuário);
// e Crie uma matriz de distâncias entre cidades de tamanho N x N;
// e Calculea distância entre cada duas cidades e armazene na matriz;
// e Exiba na tela a matriz de distancias obtida;
#include<stdio.h>
#include<stdlib.h>
    int main(){
        int a = 10;
        int *pont_a;
        pont_a = &a;
        int **pont_pont_a;
        pont_pont_a = &pont_a;
        int ***pont_pont_pont_a;
        pont_pont_pont_a = &pont_pont_a;

        printf("a = %d\n", a);
        printf("&a = %u\n", &a);

        printf("\n");

        printf("pont_a = %u\n", pont_a); // endereço de a
        printf("*pont_a = %u\n", *pont_a); // valor de a;

        printf("\n");

        printf("pont_pont_a = %u\n", pont_pont_a); // endereço de pont_a
        printf("*pont_pont_a = %u\n", *pont_pont_a); // valor de pont_a que é o endereço de a
        printf("**pont_pont_a = %u\n", **pont_pont_a);// emprime o valor de a;

        printf("\n");

        printf("pont_pont_pont_a = %u\n", pont_pont_pont_a); // endereco de pont_pont_a;
        printf("*pont_pont_pont_a = %u\n", *pont_pont_pont_a); // valor de pont_pont_a que e o endereco de pont_a;
        printf("**pont_pont_pont_a = %u\n", **pont_pont_pont_a); // valor de pont_a que é o endereço de a
        printf("***pont_pont_pont_a = %u\n", ***pont_pont_pont_a); // imprime o valor de a;

        return 0;

    }
