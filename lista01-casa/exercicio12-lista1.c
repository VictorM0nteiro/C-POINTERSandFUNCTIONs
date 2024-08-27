// 12. Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o segundo menor valor na variável do meio, e o maior valor na última variável. A função deve retornar o valor 1 se os três valores forem iguais e O se existirem valores diferentes. Exibir os valores ordenados na tela.
#include <stdio.h>
    int ordenarValores(int *a, int *b, int *c){
        int temp;

        if(*a > *b){
            temp = *a;
            *a = *b;
            *b = temp;
        }
        if(*b > *c){
            temp = *b;
            *b = *c; 
            *c = temp;
        }
        if(*a > *b){
            temp = *a;
            *a = *b;
            *b = temp;
        }

        if( *a == *b && *b == *c){
            return 1;
        }

        return 0;
        
    }


    int main(){
        int a1, b1, c1;
        int resultado;

        printf("Digite o primeiro valor: ");
        scanf("%d", &a1);
        printf("Digite o primeiro valor: ");
        scanf("%d", &b1);
        printf("Digite o primeiro valor: ");
        scanf("%d", &c1);

        resultado = ordenarValores(&a1, &b1, &c1);

        printf("Valores ordenados: %d, %d, %d\n", a1, b1, c1);

        if(resultado == 1){
            printf("Todos os valores sao iguais.\n");
        }
        else{
            printf("Sao diferentes\n");
        }

    }