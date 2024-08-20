// 4. Faça um programa que leia 2 valores inteiros, logo após declare dois ponteiros A e B. Cada ponteiro recebe o endereço de uma
//das variáveis. Imprima o conteúdo para onde cada ponteiro aponta.
//Logo após troque os endereços dos ponteiros. Após isso, A conterá o valor de B e B terá o valor de A.
#include <stdio.h>

    int main(){
        int a, b;
        int *pont_a, *pont_b;

        scanf("%d", &a);
        scanf("%d", &b);

        pont_a = &a;
        pont_b = &b;

        printf("Conteudo de a: %d\n", *pont_a);
        printf("Conteudo de b: %d\n", *pont_b);

        int *temp = pont_a;
        pont_a = pont_b;
        pont_b = temp;

        printf("Conteudo de a trocado: %d\n", *pont_a);
        printf("Conteudo de b trocado: %d\n", *pont_b);

        return 0;


    }
