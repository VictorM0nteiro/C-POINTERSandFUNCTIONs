/*8. Faça um programa que irá ler dois valores flutuantes “a” e “b”.
Logo após o programa deve efetuar um cálculo com estes dois valores e imprimir o resultado.
O cálculo é selecionado conforme atende os seguintes requisitos:
— Soma se a posição de memória de “a” e “b” for divisível por 3;
— Subtração se a posição de memória de “a” ou “b” for divisível por 5;
— Multiplicação se o valor absoluto da subtração entre as posições de memória de “a” e “b” for maior que 4;
— Divisão de “a” com “b” caso não atende nenhum requisito.*/
#include <stdio.h>
    int main(){
        float a, b;

        printf("Valor de a:");
        scanf("%f", &a);
        printf("Valor de b:");
        scanf("%f", &b);

        float *ptrA = &a;
        float *ptrB = &b;

         // Calculando com base nos requisitos
        if (((long)ptrA % 3 == 0) && ((long)ptrB % 3 == 0)) {
            printf("Soma: %.2f + %.2f = %.2f\n", a, b, a + b);
        }
        else if (((long)ptrA % 5 == 0) || ((long)ptrB % 5 == 0)) {
            printf("Subtracao: %.2f - %.2f = %.2f\n", a, b, a - b);
        }
        else if (abs((long)ptrA - (long)ptrB) > 4) { // abs para o valor absoluto da subtração
            printf("Multiplicacao: %.2f * %.2f = %.2f\n", a, b, a * b);
        }
        else{
            printf("Divisao: %.2f / %.2f = %.2f\n", a, b, a / b);
        }

        return 0;
    }
