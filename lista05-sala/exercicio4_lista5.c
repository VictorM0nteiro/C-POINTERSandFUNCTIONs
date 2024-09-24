//4. Faça uma função que verifica se um valor inteiro é primo ou não.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int ehprimo(int num);

int main(){
    int x;
    printf("Digite uma variavel: ");
    scanf("%d", &x);

    int resultado;
    resultado = ehPrimo(x);

    if(resultado == 1){
        printf("eh primo, %d\n", x);
    }
    else{
        printf("Nao eh primo, %d\n", x);
    }

    return 0;
}

int ehPrimo(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

