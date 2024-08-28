<<<<<<< HEAD
//Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima o endereço de cada posição dessa matriz.
#include <stdio.h>

int main() {
    float matriz[3][3];  // Declara uma matriz 3x3 de floats
    float *ptr = NULL;

    for (int i = 0; i < 3; i++) {
        ptr = matriz[i];
        for (int j = 0; j < 3; j++) {  // Atribui ao ponteiro o endereço do elemento atual
            printf("Posicao [%d][%d] tem o endereco %p\n", i, j, (matriz + j));
        }
    }

    return 0;
}
=======
//Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima o endereço de cada posição dessa matriz.
#include <stdio.h>

int main() {
    float matriz[3][3];  // Declara uma matriz 3x3 de floats
    float *ptr = NULL;

    for (int i = 0; i < 3; i++) {
        ptr = matriz[i];
        for (int j = 0; j < 3; j++) {  // Atribui ao ponteiro o endereço do elemento atual
            printf("Posicao [%d][%d] tem o endereco %p\n", i, j, (matriz + j));
        }
    }

    return 0;
}
>>>>>>> 186293c7a32609b2cb84f694007fb8c7c88cf4ec
