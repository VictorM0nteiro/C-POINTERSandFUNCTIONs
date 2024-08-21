// // 10. Declare um vetor do tipo double de 5 posições. 
// Leia os valores deste vetor no teclado. Declare um ponteiro para double. 
// Faça o ponteiro apontar para o menor valor. 
// Neste programa você só pode usar os operadores relacionais entre o ponteiro e o vetor (dois ou mais elementos do vetor não pode ser comparados entre se!).

#include <stdio.h>
    int main(){
        double vetor[5];

        for( int i = 0; i < 5; i++){
            printf("Digite o valor para a posicao %d: ", i);
            scanf("%lf", &vetor[i]);
        }

        double *pont_double = &vetor[0];

        for( int i = 0; i < 5; i++){
            if(*pont_double < vetor[i]){ // se o conteudo da variavel que ponteiro aponta for menor que valor do vetor[i]
                pont_double = &vetor[i]; // a variavel pont_double vai recebr a posição de memoria especifica
            }
        }

        printf("O menor valor eh: %.2lf\n", *pont_double);


    }