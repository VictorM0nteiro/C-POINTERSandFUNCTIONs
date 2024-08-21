//5. Declare duas variáveis inteiras. Leia dois valores inteiros do usuário e armazene nestas variáveis.
//Use dois ponteiros para trocar o conteúdo dessas duas variáveis.
//Imprima as variáveis e suas posições de memória antes e depois de trocar os valores.

#include <stdio.h>
    int main(){
        int a, b;
        printf("valor de a:");
        scanf("%d", &a);
        printf("valor de b:");
        scanf("%d", &b);

        int *pont_a = &a;
        int *pont_b = &b;

         // Imprimindo valores e posições de memória antes da troca
        printf("\nAntes da troca:\n");
        printf("Valor de a: %d, Endereco de a: %p\n", a, pont_a);
        printf("Valor de b: %d, Endereco de b: %p\n", b, pont_b);

        int temp = *pont_a;
        *pont_a = *pont_b;
        *pont_b = temp;

        printf("Apos a troca:\n");
        printf("Valor de a: %d, Endereco de a: %p\n", a, pont_a);
        printf("Valor de b: %d, Endereco de b: %p\n", b, pont_b);

        return 0;

    }
