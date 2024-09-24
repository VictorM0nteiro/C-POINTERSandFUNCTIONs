//8. Faça uma função que receba dois números inteiros por parâmetro e retorne a soma dos N números inteiros positivos existentes entre eles.

#include <stdio.h>

int soma_numeros_entre(int num1, int num2);

int main() {
    int num1, num2;
    
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    
    int resultado = soma_numeros_entre(num1, num2);
    printf("A soma dos numeros inteiros positivos entre %d e %d eh: %d\n", num1, num2, resultado);

    return 0;
}

int soma_numeros_entre(int num1, int num2) {
    int i, soma, temp;
    if( num1 < num2){
        temp = num2-num1;
    }

    return soma;
}