//8. Faça uma função que receba dois números inteiros por parâmetro e retorne a soma dos N números inteiros positivos existentes entre eles.

#include <stdio.h>
#include <math.h>

int soma_numeros_entre(int num1, int num2);

int main() {
    int num1, num2;
    
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    
    int resultado;
    resultado = soma_numeros_entre(num1, num2);
    printf("A soma dos numeros inteiros positivos entre %d e %d eh: %d\n", num1, num2, resultado);

    return 0;
}

int soma_numeros_entre(int num1, int num2) {
    int soma = 0, temp;

    if(num1 > num2){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    for(int i = num1 + 1; i < num2; i++){
        if( i > 0){
            soma += i;
        }
    }
    
    return soma;
}