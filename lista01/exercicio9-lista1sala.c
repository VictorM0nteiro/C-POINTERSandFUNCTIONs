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

        int *pont_1 = &a;
        int *pont_2 = &b;

        if((*pont_1 - *pont_2)*(*pont_1 - *pont_2) > 0){ 
            // diferença de quadrados, no caso se p1 > p2, pa continua´ra apontando para p1
        }
        else{
            // Se a <= b, atualiza p1 para apontar para b
            pont_1 = pont_2;
        }

        // pont_1 aponta para o maior ente a e b
        // agora comparar o maior de a e b com c

        if((*pont_1-c)*(*pont_1-c) > 0){
            //no caso se p1 > c, pa continua´ra apontando para p1
        }
        else{
            *pont_1 = c;
        }

        printf("O maior valor eh: %d", *pont_1);



    }