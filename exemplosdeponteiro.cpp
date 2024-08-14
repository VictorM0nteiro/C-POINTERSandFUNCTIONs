#include <stdio.h>
    int main(){
        int a = 40;
        int *p = NULL; // ponteiro
        p = &a;
        printf("endereco de a eh: %d\n", p); // a informação contida em p é o endereço de a;

        // desreferenciamento

        int b = 60;
        int *p1 = NULL;
        p1 = &b; // ponteiro p1 aponta para o endereco de b;
        printf("a varialvel de B eh: %d\n", *p1); // vai acessar a informação na posição de memória que o ponteiro aponta, ou seja B;
        *p1 = 700; // Vai alterar a informação contida na posição de memória do ponteiro no caso o b
        printf("a nova variavel de B eh: %d\n", b);

        // outros exemplos
        printf("valor da var b eh: %d\n", *p1); // valor de b
        printf("valor da var p eh: %d\n", p1); // valor de p1
        printf("endereco da var p eh: %d\n", &p1); // endereco de p1 

    }