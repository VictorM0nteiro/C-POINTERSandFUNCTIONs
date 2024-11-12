// 13 - Sabendo que a função strlen conta a quantidade de caracteres que a string possui,
// faça uma função que imite-a.

#include <stdio.h>
    int minhaStrlen(const char *str){
        int contador = 0;

        while(*str != '\0'){
            contador++;
            str++; //para ir para a proxima posicao da string
        }

        return contador;
    }

    int main(){
        char string[] = "Exemplo de string";
        
        int comprimento = minhaStrlen(string);

        printf("A string possui %d caracteres.\n", comprimento);

        return 0;
    }
