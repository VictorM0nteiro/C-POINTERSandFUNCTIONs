//45. Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado perfeito e um número inteiro não negativo que pode ser expresso como o quadrado de outro número inteiro. Ex: 1,4, 9...

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ehQuadrado_perfeito(int num, int *raiz);

int main(){
    int x;
    printf("Digite uma variavel: ");
    scanf("%d", &x);

    int raiz;

    int resultado;
    resultado = ehQuadrado_perfeito(x, &raiz);

    if(resultado == 1){
        printf("eh quadrado perfeito, %d, raiz aproximada %d\n", x, raiz);
    }
    else{
        printf("Nao eh quadrado perfeito, %d , raiz aproximada %d\n", x, raiz);
    }

    return 0;

}

int ehQuadrado_perfeito(int num, int *raiz) {
    *raiz = (int)sqrt(num);
    if ((*raiz) * (*raiz) == num) return 1;
    else return 0;
}
