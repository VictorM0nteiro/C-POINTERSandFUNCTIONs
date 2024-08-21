// 1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para in- teiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de cada variavel usando os ponteiros. Imprima os valores das variaveis antes e apos a modificagao.


#include <stdio.h>
    int main(){
        int inteiro = 10;
        float real = 5.5;
        char caractere = 'a';

        int *p_inteiro = &inteiro;
        float *p_real = &real;
        char *p_char = &caractere;
        // antes da alteracao
        printf("Antes da alteracao:\n");
        printf("Inteiro: %d\n", *p_inteiro);
        printf("Inteiro: %f\n", *p_real);
        printf("Inteiro: %c\n", *p_char);

        printf("\n");
        // alteracao;
        *p_inteiro = 100;
        *p_real = 1010.10;
        *p_char = 'v';


        printf("Depois da alteracao:\n");
        printf("Inteiro: %d\n", *p_inteiro);
        printf("Inteiro: %f\n", *p_real);
        printf("Inteiro: %c\n", *p_char);

        return 0;
    }