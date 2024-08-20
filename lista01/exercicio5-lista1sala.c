//5. Declare duas vari�veis inteiras. Leia dois valores inteiros do usu�rio e armazene nestas vari�veis.
//Use dois ponteiros para trocar o conte�do dessas duas vari�veis.
//Imprima as vari�veis e suas posi��es de mem�ria antes e depois de trocar os valores.

#include <stdio.h>
    int main(){
        int a, b;
        printf("valor de a:");
        scanf("%d", &a);
        printf("valor de b:");
        scanf("%d", &b);

        int *pont_a = &a;
        int *pont_b = &b;

         // Imprimindo valores e posi��es de mem�ria antes da troca
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
