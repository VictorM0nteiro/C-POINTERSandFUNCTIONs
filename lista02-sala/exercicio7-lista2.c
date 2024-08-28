//7. Crie um Struct chamado valores que contém um inteiro e um double. 
// Faça um vetor de 4 posições do tipo valores e crie um ponteiro que aponta para este vetor. 
// Adicione 4 elementos neste vetor. Imprima o conteúdo do vetor usando o ponteiro. 
// Imprima também a posição de memória de cada elemento do vetor (usando o ponteiro).

#include <stdio.h>
    struct valores
    {
        int interger;
        double duplo;
    };
    
    int main(){
        struct valores vetor[4];
        struct valores *ptr_vetor = NULL;
        ptr_vetor = vetor;

        // printf("%p\n", &vetor);
        // printf("%p\n", ptr_vetor);

        for(int i = 0; i < 4; i++){
            ptr_vetor[i].interger = i+1;
            ptr_vetor[i].duplo = (i+1)*1.5;
        }

        printf("Conteudo do vetor:\n");
        for(int i = 0; i < 4; i++){
            printf("Elemento [%d] do vetor, seu valor int %d e double %.2lf\n", i, (ptr_vetor[i].interger), (ptr_vetor[i].duplo));
        }

        printf("\nPosicaos de memoria dos elementos\n");
        for(int i = 0; i < 4; i++){
            printf("Elemento [%d] e seu endereco %p\n", i, &ptr_vetor[i]); // por algum motivo que eu não sei o & é necessário aqui
        }

        return 0;
    }