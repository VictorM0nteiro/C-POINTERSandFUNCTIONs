//3. Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
#include <stdio.h>
    int main(){
        int var1;
        int var2;
        int *p_var1 = &var1; // estes ponteiros estçao apontando para o endereço de var1 e var2
        int *p_var2 = &var2;

        // testes
        scanf("%d", p_var1);// atribui a var 1, pois possui seu endereço de memoria
        scanf("%d", p_var2);// atribui a var 2, pois possui seu endereço de memoria

        // printf("%d\n", var1);
        // printf("%d\n", var2);
        printf("Enderecos\n");
        printf("Endereco 1: %d\n", p_var1);
        printf("Endereco 2: %d\n", p_var2);

        if(p_var1 > p_var2){
            printf("Conteudo primeiro endereco, ja que o 1 end eh maior: %d\n", *p_var1); // end == endereço
        }
        else{
            printf("Conteudo segundo endereco, ja que o 2 end eh maior: %d\n", *p_var1);
        }
        return 0;
    }