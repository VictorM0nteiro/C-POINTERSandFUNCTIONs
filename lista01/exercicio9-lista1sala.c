//9. Crie três variáveis do tipo inteiro. Leia os valores das variáveis. 
//Declare dois ponteiros. O código deve imprimir o maior valor, 
//no entanto não se pode usar nenhum operador relacional nas variáveis. 
//Dessa forma use os ponteiros para encontrar o maior valor.

#include <stdio.h>
    int main(){
        int a, b, c;

        printf("Digite o valor de a: ");
        scanf("%d", &a);
        printf("Digite o valor de b: ");
        scanf("%d", &b);
        printf("Digite o valor de c: ");
        scanf("%d", &c);

        int *pont_a = &a;
        int *pont_b = &b;
        int *pont_c = &c;

        
    }