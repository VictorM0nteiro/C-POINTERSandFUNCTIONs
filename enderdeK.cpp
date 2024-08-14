#include <stdio.h>
    int main(){
        int k = 10;
        unsigned int endereco_de_k;
        printf("valor de K: %d\n", k);

        endereco_de_k = (unsigned int)&k;

        printf("Endereco de k: %u\n", endereco_de_k);
        printf("Endereco de k: %u\n", &k);

        //o que acontece se passarmos o endereço de k no scanf?
        scanf("%u", endereco_de_k); // com isso eu altero o valor de k

        printf("Novo valor de k: %u\n", k);

        printf("Endereco de k: %u\n", endereco_de_k); // estes não se alteraram
        printf("Endereco de k: %u\n", &k);

    }