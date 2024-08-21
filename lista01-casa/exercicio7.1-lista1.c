// 7. Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B. A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal.

#include <stdio.h>
    void calcularSoma(int *a, int *b){
        *a = *a + *b;
    }

    int main(){
        int a, b;

        printf("Digite o primeiro valor: \n");
        scanf("%d", &a);

        printf("Digite o segundo valor: \n");
        scanf("%d", &b);


        calcularSoma(&a, &b);

        printf("Valor de A apos a soma: %d\n", a);
        printf("Valor de B: %d\n", b);

        return 0;


    }