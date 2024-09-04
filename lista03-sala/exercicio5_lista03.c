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

        vetor = (float *)malloc((*pont_tamanho) *sizeof(float));
        if(vetor == NULL){
            printf("Erro ao alocar memoria!\n");
            return 1;
        }

        floatVetor = (float *)vetor;

        srand(time(NULL)); // definir a semente do gerador de numeros aleatorios, como o tempo atual

        //float numAleatorio = rand() % 101; 
        //o valor de rand é dividido por 101 ( 0 - 100), assim o resto da divisão é o valor utilizado
        //infelizmente só da numeros inteiros, não é o caso

        for( int i = 0; i < 10; i++){
            *(floatVetor+i) = (float)rand() / (float)(RAND_MAX) * 100; // rand(entre 0 e 32767) / 32767 * 100
        }
        
        //testes
        // printf("%.2f\n", (float)RAND_MAX);
        // printf("%.2f\n", (float)rand());
        //printf("%.2f", numAleatorio);

        printf("Os 10 primeiros valores do vetor: \n");
        for(int i = 0; i < 10; i++){
            printf("%.2f ", *(floatVetor+i));
        }

        free(vetor);
    }