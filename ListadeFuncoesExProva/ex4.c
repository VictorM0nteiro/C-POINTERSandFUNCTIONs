// 04 - Faça um programa que leia uma quantidade N de palavras, sendo que N é
// fornecido pelo usuário. Elas devem ser salvas em uma matriz de modo que cada
// linha represente uma palavra. Faça uma função que receba como parâmetro um
// número inteiro, a matriz lida e um vetor de inteiros, todos passados por
// referência. O que a função deverá fazer é salvar no vetor os números das linhas
// em que a primeira letra da palavra é igual à última. O número inteiro passado como
// referência será um contador que dirá o tamanho desse vetor, ou seja, a quantidade
// de palavras em que a primeira e a última letra são iguais

#include <stdio.h>
#include <string.h>

#define MAX_PALAVRAS 100
#define MAX_COMPRIMENTO 50

void encontrarPalavrasIguais(int n, char palavras[][MAX_COMPRIMENTO], int *contador, int *vetorLinhas) {
    *contador = 0;

    for (int i = 0; i < n; i++) {
        int comprimento = strlen(palavras[i]);
        if (comprimento > 0 && palavras[i][0] == palavras[i][comprimento - 1]) {
            vetorLinhas[*contador] = i;  
            (*contador)++;  
        }
    }
}

int main() {
    int n;
    printf("Digite a quantidade de palavras: ");
    scanf("%d", &n);
    getchar(); 

    char palavras[MAX_PALAVRAS][MAX_COMPRIMENTO];
    int vetorLinhas[MAX_PALAVRAS];
    int contador;


    for (int i = 0; i < n; i++) {
        printf("Digite a palavra %d: ", i + 1);
        fgets(palavras[i], MAX_COMPRIMENTO, stdin);
        palavras[i][strcspn(palavras[i], "\n")] = '\0';  
    }


    encontrarPalavrasIguais(n, palavras, &contador, vetorLinhas);


    printf("Quantidade de palavras em que a primeira e ultima letra sao iguais: %d\n", contador);
    if (contador > 0) {
        printf("As palavras estao nas linhas: ");
        for (int i = 0; i < contador; i++) {
            printf("%d ", vetorLinhas[i] + 1);
        }
        printf("\n");
    } else {
        printf("Nenhuma palavra atende ao criterio.\n");
    }

    return 0;
}
