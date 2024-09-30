//12. Faça uma função não-recursiva que receba um número inteiro positivo N e retorne o fatorial deste número.
//5! = 120

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int fatorial_do_num(int n);

    int main(){
        int n; 
        printf("Digite o valor de n: ");
        scanf("%d", &n);

        int resultado = fatorial_do_num(n);
        printf("O resultado do fatorial eh: %d\n", resultado);

        return 0;
    }

    int fatorial_do_num(int n){
        int resultado = 1;
        for(int i = 2; i <= n; i++){
            resultado *= i;
        }
        return resultado;
    }