// //8. Faça um Struct chamado ponteiros. Este Struct contém 3 ponteiros, um para inteiro, 
// um para float e um para char. Crie três variáveis: um inteiro, um float e um char. 
// Crie uma variável do tipo ponteiros e faça ponteiros guardar as posições de memórias das três variáveis primarias.
#include <stdio.h>

    struct ponteiros
    {
        int *pont_int;
        float *pont_float;
        char *pont_char;
    };
    
    int main(){
        int inteiro = 12;
        float flutuante = 5.65;
        char caractere = 'V';

        struct ponteiros varpont;

        varpont.pont_int = &inteiro;
        varpont.pont_float = &flutuante;
        varpont.pont_char = &caractere;

        printf("Valor do inteiro: %d, Endereço: %p\n", *varpont.pont_int, varpont.pont_int);
        printf("Valor de flutuante: %.2f, Endereço: %p\n", *varpont.pont_float, varpont.pont_float);
        printf("Valor de caractere: %c, Endereço: %p\n", *varpont.pont_char, varpont.pont_char);

        return 0;
    }