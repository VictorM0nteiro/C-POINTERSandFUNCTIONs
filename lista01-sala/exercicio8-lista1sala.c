/*8. Fa�a um programa que ir� ler dois valores flutuantes �a� e �b�.
Logo ap�s o programa deve efetuar um c�lculo com estes dois valores e imprimir o resultado.
O c�lculo � selecionado conforme atende os seguintes requisitos:
� Soma se a posi��o de mem�ria de �a� e �b� for divis�vel por 3;
� Subtra��o se a posi��o de mem�ria de �a� ou �b� for divis�vel por 5;
� Multiplica��o se o valor absoluto da subtra��o entre as posi��es de mem�ria de �a� e �b� for maior que 4;
� Divis�o de �a� com �b� caso n�o atende nenhum requisito.*/
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
        else if (abs((long)ptrA - (long)ptrB) > 4) { // abs para o valor absoluto da subtra��o
            printf("Multiplicacao: %.2f * %.2f = %.2f\n", a, b, a * b);
        }
        else{
            printf("Divisao: %.2f / %.2f = %.2f\n", a, b, a / b);
        }

        return 0;
    }
