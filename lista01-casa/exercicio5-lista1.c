//5. Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda variável. Escreva o conteúdo das 2 variáveis na tela.
#include <stdio.h>

void organizarValores(int *a, int *b){
    if ( *a < *b){
        int temp = *a; // temp recebe o valor de a
        *a = *b; // *a recebe o valor de *b
        *b = temp; // *b recebe o valor que era de a;
    }
}

int main(){
    int a, b;
    printf("Digite o primeiro valor: \n");
    scanf("%d", &a);

    printf("Digite o segundo valor: \n");
    scanf("%d", &b);

    organizarValores(&a, &b);

    printf("Depois da organizacao: \n");
    printf("Maior valor em A: %d\n", a);
    printf("Menor valor em B: %d\n", b);

    return 0;
}