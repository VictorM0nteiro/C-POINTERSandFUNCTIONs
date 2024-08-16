// 4. Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B terá o valor de A.
#include <stdio.h>

void trocarValores(int *a, int *b){
    int temp = *a; // Armazena o valor de A temporariamente
    *a = *b; // A recebe o valor de B
    *b = temp; // // B recebe o valor que estava em A (armazenado em temp)
    //temp = *b; // erro da primeira vez, tem estava recendo o valor de b assim a função não funciona
}
int main(){
    int a;
    int b;

    printf("Coloque o valor de A: \n");
    scanf("%d", &a);

    printf("Coloque o valor de B: \n");
    scanf("%d", &b);

    printf("Valores de A: %d e B: %d antes da troca\n", a, b);

    trocarValores(&a, &b); // & são necessário pois como a função utiliza ponteiros é faz parte do processo de atribuição padrão (ponteiros) utilizar o &

    printf("Valores de A: %d e B: %d depois da troca\n", a, b);

    return 0;

}