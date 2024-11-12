// 12 - Sabendo que a função strcat concatena duas strings, faça uma função que imite-a.

#include <stdio.h>

    void minhaStrcat(char*destino, const char *origem){
        while(*destino){ //move o ponteiro ate o fim da string de destino
            destino++;
        }

        // Copia os caracteres da string origem para o final de destino
        while (*origem)
        {
            *destino++ = *origem++;
        }
        // Adiciona o caractere nulo para terminar a string concatenada
        *destino = '\0';
        
    }

    int main(){
        char destino[100] = "Hello, ";
        char origem[] = "World!";

        minhaStrcat(destino, origem);
        
        printf("String concatenada: %s\n", destino);

        return 0;
    }