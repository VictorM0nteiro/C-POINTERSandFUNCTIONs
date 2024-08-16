// 6. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro de A na própria variável A e o dobro de B na própria variável B.

#include <stdio.h>
    int somaDobro(int *a, int *b){ // utilizar um int ou qualquer outro tipo no lugar do void pois esta função retorna um valor, quando é void faz alterações diretas nos valores das variáveis
        *a = *a * 2;
        *b = *b * 2;
        return *a + *b;
    }
    /*void dobrarValores(int *a, int *b) {
    *a = *a * 2;  // Dobra o valor de A
    *b = *b * 2;  // Dobra o valor de B
    }*/ // Assim seria a função se eu fizesse com void

    int main(){
        int a, b;
        int resultado;

        printf("Primeiro valor: \n");
        scanf("%d", &a);

        printf("Segundo valor: \n");
        scanf("%d", &b);

        /* Assim seria feito juntamente com o void
        // Chamada da função que dobra os valores
        dobrarValores(&a, &b);

        // Soma dos valores dobrados
        int resultado = a + b;
        */
        resultado = somaDobro(&a, &b);

        printf("Soma do dobro dos dois numeros lidos: %d\n", resultado);
    }