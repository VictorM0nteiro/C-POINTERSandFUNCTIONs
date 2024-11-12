// 07 - Desenvolva um programa que primeiro utilize uma função para gerar um vetor
// com tamanho definido pelo usuário e valores aleatórios dentro de um intervalo
// [min, max] determinado pelo usuário. Em seguida, uma outra função deve receber o
// vetor gerado, o tamanho do vetor e dois números maior e menor. Retorne nas
// variáveis maior e menor o menor e maior elemento do vetor. Dica1: menor e maior
// devem ser passados por referência. Dica2: use apenas uma estrutura de repetição
// para achar o menor e maior elemento.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    #include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para gerar o vetor com valores aleatórios no intervalo [min, max]
void gerarVetor(int *vetor, int tamanho, int min, int max) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = min + rand() % (max - min + 1); // Gera números entre min e max
    }
}

// Função para encontrar o menor e maior elemento no vetor
void encontrarMaiorMenor(int *vetor, int tamanho, int *menor, int *maior) {
    *menor = vetor[0];
    *maior = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
    }
}

int main() {
    int tamanho, min, max;
    int menor, maior;


    srand(time(NULL));
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    printf("Digite o valor mínimo do intervalo: ");
    scanf("%d", &min);

    printf("Digite o valor máximo do intervalo: ");
    scanf("%d", &max);

    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    gerarVetor(vetor, tamanho, min, max);


    printf("Vetor gerado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");


    encontrarMaiorMenor(vetor, tamanho, &menor, &maior);


    printf("Menor elemento: %d\n", menor);
    printf("Maior elemento: %d\n", maior);


    free(vetor);

    return 0;
}
