//4. Faça um ponteiro genérico. Declare três variáveis, um inteiro, um float e um double. Faça o usuário digitar seus valores. Use o ponteiro para apontar para os endereços dessas variáveis e imprima seus valores usando o ponteiro.
#include <stdio.h>
    int main(){
        void *generico_pont = NULL;

        int inteiro;
        float flutuante;
        double duplo;

        printf("Digite o valor inteiro: ");
        scanf("%d", &inteiro);
        printf("Digite o valor float: ");
        scanf("%f", &flutuante);
        printf("Digite o valor double: ");
        scanf("%lf", &duplo);

        generico_pont = &inteiro;
        printf("Valor do inteiro eh %d\n", *(int *)generico_pont);

        generico_pont = &flutuante;
        printf("Valor do float eh %.2f\n", *(float *)generico_pont);

        generico_pont = &duplo;
        printf("Valor do double eh %.2lf\n", *(double *)generico_pont);

        return 0;


    }