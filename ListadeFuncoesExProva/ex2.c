// 02 - Desenvolva um programa para testar as funções a seguir:
//  Uma função que receba dois números a e b, em seguida, faça a troca
// destes dois números. Dica: a e b devem ser passados por referência.

//  Uma função que receba dois números a e b, em seguida, decremente
// o primeiro e incremente o segundo. Dica: a e b devem ser passados
// por referência.

//  Uma função que receba os valores a, b e c passados por valor, receba
// também dois valores x1 e x2 passados por referência. Em seguida,
// calcule e retorne as duas raízes da equação do segundo grau nas
// variáveis x1 e x2.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    void TrocarValores (int *a, int*b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void IncrementarValores (int *a1, int *b1){
        (*a1)--;
        (*b1)++;
    }
    void CalcularRaizes(int a2, int b2, int c2, int*x1, int*x2){
        int delta = b2 * b2 - 4 *a2*c2;
        if(delta < 0){
            printf("A equacao nao possui raizes reais\n");
            *x1 = *x2 = 0;
        }
        else{
            *x1 = (-b + sqrt(delta)) / (2 * a);
            *x2 = (-b - sqrt(delta)) / (2 * a);
        }
    }
    int main(){
        printf("Primeira Func\n");
        int a, b;
        scanf("%d %d", &a, &b);
        printf("Antes da troca %d %d\n", a, b);
        TrocarValores(&a, &b);
        printf("Depois da troca %d %d\n", a, b);

        printf("Segunda Func\n");
        int a1, b1;
        scanf("%d %d", &a1, &b1);
        printf("Antes de incrementar %d %d\n", a1, b1);
        IncrementarValores(&a1, &b1);
        printf("Depois de incrementar %d %d\n", a1, b1);

        printf("Terceira Func\n");
        int a2, b2, c2;
        float x1, x2;
        printf("Digite o valor de a: ");
        scanf("%d", &a);
        printf("Digite o valor de b: ");
        scanf("%d", &b);
        printf("Digite o valor de c: ");
        scanf("%d", &c);
        CalcularRaizes(a2, b2, c2, &x1, &x2);
        if (x1 != 0 || x2 != 0) {
        printf("As raizes da equacao sao: x1 = %.2f e x2 = %.2f\n", x1, x2);
        }
        
        return 0;
    }