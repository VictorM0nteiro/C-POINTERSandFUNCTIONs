//6. Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida em graus Fahrenheit. A formula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float em_farenheit(float a);

int main(){
    float x;
    printf("Digite uma temperatura em Graus celsius: ");
    scanf("%f", &x);

    float resultado;
    resultado = em_farenheit(x);

    printf("A temperatura %.2f em farenheit eh %.2f\n", x, resultado);

    return 0;


}

float em_farenheit(float a){
    float farenheit;
    farenheit = a * (9.0/5.0) + 32.0;
    return farenheit;
}