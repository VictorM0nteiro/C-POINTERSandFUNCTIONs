// 6. Declare um inteiro a=10. Declare o ponteiro pa que aponta para a. Imprima os valores *pa e pa.
//Declare o ponteiro *ppa do tipo inteiro.
//Fa�a ppa apontar para pa (dessa forma => ppa = &pa). Imprima *ppa e ppa. Em todas as impress�es usa o %d.
#include <stdio.h>

int main() {
    int a = 10;      // Declarando a vari�vel 'a'
    int *pa = &a;    // Declarando o ponteiro 'pa' que aponta para 'a'
    int **ppa = &pa; // Declarando o ponteiro 'ppa' que aponta para 'pa'

    // Imprimindo o valor apontado por 'pa' e o endere�o armazenado em 'pa'
    printf("Valor de *pa: %d\n", *pa);
    printf("Valor de pa: %d\n", pa);

    // Imprimindo o valor apontado por 'ppa' e o endere�o armazenado em 'ppa'
    printf("Valor de *ppa: %d\n", *ppa);  // *ppa � o valor de 'pa', que � o endere�o de 'a'
    printf("Valor de ppa: %d\n", ppa);    // ppa � o endere�o de 'pa'

    return 0;
}
