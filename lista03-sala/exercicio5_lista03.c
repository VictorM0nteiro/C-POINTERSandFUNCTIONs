//5. Faça um programa que pergunte ao usuário quantos valores ele deseja armazenar em um vetor do tipo void, depois use a função MALLOC para reservar (alocar) o espaço de memória de acordo com o especificado pelo usuário. Esse vetor deve ter um tamanho maior ou igual a 10 elementos, se não tiver, peça ao usuário para digitar novamente o tamanho do vetor. Use este vetor dinâmico como um vetor comum, atribuindo aos 10 primeiros elementos do vetor valores flutuantes aleatórios (usando a função rand) entre O e 100. Exiba na tela os valores armazenados nos 10 primeiros elementos do vetor.

#include <stdio.h>
#include <stdlib.h>
    int main(){
        int tamanho;
        int *pont_tamanho;
        pont_tamanho = &tamanho;
        void *vetor;
        float *floatVetor;

        do{
            printf("Informe o tamanho do vetor (minimo 10):");
            scanf("%d", pont_tamanho);
            if(*pont_tamanho < 10){
                printf("O vetor deve ter eplo menos 10 elementos\n");
            }
        }while(*pont_tamanho < 10);
    }