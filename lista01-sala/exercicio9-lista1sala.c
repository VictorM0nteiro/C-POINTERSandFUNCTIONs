//9. Crie três variáveis do tipo inteiro. Leia os valores das variáveis. 
//Declare dois ponteiros. O código deve imprimir o maior valor, 
//no entanto não se pode usar nenhum operador relacional nas variáveis. 
//Dessa forma use os ponteiros para encontrar o maior valor.

#include <stdio.h>

int main() {
    int a, b, c;

    // Leitura dos valores
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    // Declarando dois ponteiros
    int *pont_1 = &a;
    int *pont_2 = &b;

    // Comparando a e b
    if (*pont_1 - *pont_2 < 0) {
        pont_1 = pont_2; // pont_1 aponta para o maior entre a e b, fazendo dessa maneira mudo a posição ao qual o ponteiro aponta e não a variavel
    }

    // Comparando o maior entre a e b com c
    pont_2 = &c;
    if (*pont_1 - *pont_2 < 0) {
        pont_1 = pont_2; // pont_1 aponta para o maior entre a, b e c
    }

    printf("O maior valor eh: %d\n", *pont_1);

    return 0;
}
