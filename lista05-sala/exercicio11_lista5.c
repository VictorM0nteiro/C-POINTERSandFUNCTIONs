// 11. Faça uma função que receba um inteiro N como parâmetro, calcule e retorne o resultado da seguinte serie: S=2/4+5/5+10/6+... + (N^2 +1)/(N+3)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    float serie_estranha(int n);

    int main(){
        int n; 
        printf("Digite o valor de n: ");
        scanf("%d", &n);
        float resultado = serie_estranha(n);
        printf("O resultado da serie eh: %.2f\n", resultado);
        return 0;
    }

    float serie_estranha(int n){
        // ex n = 2 (N^2 +1)/(N+3)
        // s = (1^2+1)/(1+3) + (2^2+1)/(2+3) == S=2/4+5/5
        float soma = 0;

        for(int i = 1; i <= n; i++){
            soma += (float)(i * i + 1) / (i + 3);
        }

        return soma;
    }