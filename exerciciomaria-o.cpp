#include <stdio.h>
    int main(){
        char nome[] = "Maria";
        printf("%s\n", nome);
        unsigned int endereco_de_maria;
        endereco_de_maria = (unsigned int)&nome;
        //printf("endereco de maria: %u", endereco_de_maria); // 6422294
        endereco_de_maria = 6422298;
        scanf("%c", endereco_de_maria);
        printf("Novo nome de Maria: %s.\n", nome);
    }