// 7. Faça um programa para ler valores primos do usuário. Um menu deve ser usado para inserir os números (Também deve conter a opção “sair). O usuário pode inserir quantos números quiser, mas eles precisam ser primos, caso não seja peça para ler o valor novamente. Você irá começar com um vetor de tamanho 1. Sempre que quiser inserir um novo número primo, o programa deve realocar o tamanho do vetor e inserir 0 valor. Os valores devem ser inseridos em ordem crescente, por isso nem sempre o programa irá inserir no final do vetor. Para isso, faça um Shift em parte do vetor que facilita a inserção do novo número. Quando o usuário selecionar sair, imprima os valores do vetor, que devem estar em ordem crescente.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
    
    //funcao para verificar se eh primo //números naturais maiores que 1 que são divisíveis apenas por 1 e por eles mesmos
bool ehPrimo(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

// Função para inserir um número no vetor de forma ordenada usando aritmética de ponteiros
void inserirOrdenado(int **vetor, int *tamanho, int num) {
    int i = 0;
    
    
    while (i < *tamanho && *(*vetor + i) < num) {
        i++;
    }

    // Realocar o vetor para adicionar um novo número
    *vetor = (int *)realloc(*vetor, (*tamanho + 1) * sizeof(int));
    if (*vetor == NULL) {
        printf("Erro ao realocar memoria!\n");
        exit(1);
    }

    // Fazer o shift para a direita para inserir o número na posição correta
    for (int j = *tamanho; j > i; j--) {
        *(*vetor + j) = *(*vetor + (j - 1));
    }

    // Inserir o número na posição correta
    *(*vetor + i) = num;
    (*tamanho)++;
}

int main() {
    int *vetor = NULL;  
    int tamanho = 0;    
    int opcao, num;
    int *pont_opcao;
    pont_opcao = &opcao;
    int *pont_num;
    pont_num = &num;

    do {
        printf("\nMenu:\n");
        printf("1. Inserir numero primo\n");
        printf("2. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", pont_opcao);

        switch (opcao) {
            case 1:
                printf("Digite um numero primo: ");
                scanf("%d", pont_num);

                if (ehPrimo(*pont_num)) {
                    inserirOrdenado(&vetor, &tamanho, *pont_num);
                    printf("Numero primo %d inserido com sucesso.\n", *pont_num);
                } else {
                    printf("Numero nao eh primo. Tente novamente.\n");
                }
                break;
            case 2:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 2);

    // Exibir os números primos armazenados no vetor
    printf("\nNumeros primos armazenados (em ordem crescente):\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", (int*)(*vetor + i));
    }
    printf("\n");

    // Libera a memória alocada
    free(vetor);

    return 0;
}

