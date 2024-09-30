//13. Faça uma função não-recursiva que receba um número inteiro positivo ímpar N e retorne o fatorial duplo desse número. O fatorial duplo é definido como o produto de todos os números naturais ímpares de 1 até algum número natural ímpar N. Assim, o fatorial duplo de 56: 5!!=1*3*5=15


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int fatorial_duplo(int n);

    int main(){
        int n; 
        printf("Digite o valor de n: ");
        scanf("%d", &n);

        int resultado = fatorial_duplo(n);
        printf("O resultado do fatorial eh: %d\n", resultado);

        return 0;
    }

    int fatorial_duplo(int n){
        int resultado = 1;
        for(int i = n; i > 0; i-=2){
            resultado *= i;
        }
        return resultado;
    }